#include <PrintVisitor.hpp>
#include <SymbolTable.hpp>
#include <algorithm>
#include <boost/algorithm/string/replace.hpp>

namespace SynthLib2Parser {

void PrintVisitor::GetStringToOperatorMap()
{
  String2OperatorMap["bvand"] = "&";

       String2OperatorMap["bvor"] =  "|";
       String2OperatorMap["bvxor"] =  "^";
       String2OperatorMap["bvnot"] =  "~";
       String2OperatorMap["bvneg"] =  "~";
       String2OperatorMap["bvlshl"] = "<<";
       String2OperatorMap["bvlahl"] = "<<";
       String2OperatorMap["bvshl"] = "<<";
       String2OperatorMap["bvlshr"] = ">>";
       String2OperatorMap["bvlahr"] = ">>";
       String2OperatorMap["bvshr"] = ">>";
       String2OperatorMap["bvadd"] =  "+";
       String2OperatorMap["bvsub"] =  "-";
       String2OperatorMap["bvmul"] =  "*";
       String2OperatorMap["bvudiv"] = "/";
       String2OperatorMap["bvsdiv"] =  "/";
       String2OperatorMap["bvurem"]= "%";
       String2OperatorMap["bvsrem"] = " % ";
       String2OperatorMap["bvlshr"] = " >> ";
       String2OperatorMap["not"] =  "!";
       String2OperatorMap["xor"] = "^";
       String2OperatorMap["and"] = "&&";
       String2OperatorMap["or"] = "||";
       String2OperatorMap["="] = "==";
       String2OperatorMap["true"] = "1";

       BasicOperators.insert("+");
       BasicOperators.insert("-");
       BasicOperators.insert("*");
       BasicOperators.insert("/");
       BasicOperators.insert("%");
       BasicOperators.insert("==");
       BasicOperators.insert("<");
       BasicOperators.insert("<=");
       BasicOperators.insert(">");
       BasicOperators.insert(">=");
}

std::string PrintVisitor::ReformatFunctionName(const std::string& name)
{
   if(String2OperatorMap.find(name)!=String2OperatorMap.end())
     return String2OperatorMap[name];

   std::string result = name;
   if(name.find('-')!=std::string::npos &&
       BasicOperators.find(name)==BasicOperators.end())
   {
     std::replace( result.begin(), result.end(), '-', '_');
   }
   if (name.find('.') != std::string::npos &&
       BasicOperators.find(name) == BasicOperators.end()) {
     std::replace(result.begin(), result.end(), '.', '_');
   }

   return result;
}


std::string PrintVisitor::ReformatLiteralString(const std::string& name)
{
  std::string result = name;
  if(name.find("#x")!=std::string::npos)
  {
    result.erase(0,2);
    result = "0x"+result;
  }
  if(name.find("#b",0)==0)
  {
    result.erase(0,2);
    result = "0b"+result;
  }
  if(name=="true")
    result = "1";
  if(name=="false")
    result = "0";

  return result;
}

std::string PrintVisitor::ReformatSymbol(const std::string& name)
{

  if(name.find('-')!=std::string::npos)
    {
      std::string result = name;
      std::replace( result.begin(), result.end(), '-', '_');
      return result;
    }

  return name;
}




    map<string,string> PrintVisitor::InitializeLogicGrammars()
    {
        map<string,string> logicGrammars;
        logicGrammars["LIA"] = "... grammara of LIA ...";

        ostringstream StrInt;
        StrInt << 
	    "ConstantInt" << endl <<
            "  (+ StartInt StartInt)" << endl <<
            "  (- StartInt StartInt)" << endl <<
            "  (* StartInt ConstantInt)" << endl <<
            "  (* ConstantInt StartInt)" << endl <<
        //    "  (div StartInt ConstantInt)" << endl <<
        //    "  (mod StartInt ConstantInt)" << endl <<
            "  (ite StartBool StartInt StartInt)" << endl;
        logicGrammars["StartInt"] =  StrInt.str();

        ostringstream StrCnst;
	StrCnst << "(Constant Int)" << endl; 
        logicGrammars["ConstantInt"] = StrCnst.str(); 

        ostringstream StrBool;
        StrBool <<  "true   false" << endl <<
                "  (and  StartBool StartBool)" << endl <<
                "  (or   StartBool StartBool)" << endl <<
                "  (=>   StartBool StartBool)" << endl <<
                "  (xor  StartBool StartBool)" << endl <<
                "  (xnor StartBool StartBool)" << endl <<
                "  (nand StartBool StartBool)" << endl <<
                "  (nor  StartBool StartBool)" << endl <<
                "  (iff  StartBool StartBool)" << endl <<
                "  (=    StartBool StartBool)" << endl <<
                "  (not  StartBool)" << endl <<
                "  (<= StartInt StartInt)" << endl <<
                "  (<  StartInt StartInt)" << endl <<                
                "  (=  StartInt StartInt)" << endl <<
                "  (>= StartInt StartInt)" << endl <<
                "  (>  StartInt StartInt)" << endl;                
        logicGrammars["StartBool"] = StrBool.str();                                                         

        return logicGrammars;
    }

    map<string,string> PrintVisitor::LogicGrammars = PrintVisitor::InitializeLogicGrammars();  


    PrintVisitor::PrintVisitor(ostream& Out, const SymbolTable* SymTbl, bool Compile, bool SMTlet)
      : ASTVisitorBase("PrintVisitor"), IndentLevel(0), Out(Out), 
	    TheSymbolTable(SymTbl), SMTlet(SMTlet), Compile(Compile)
    {
        // Nothing here
    }

    PrintVisitor::~PrintVisitor()
    {
         Out.flush();
    }

    inline string PrintVisitor::GetIndent()
    {
        string Retval(IndentLevel * 4, ' ');
        return Retval;
    }

    void PrintVisitor::VisitProgram(const Program* Prog)
    {
        cex_counter=0;
        program_counter=0;
        first_declaration=true;
        GetStringToOperatorMap();
        for(auto const& Cmd : Prog->GetCmds()) {
            Cmd->Accept(this);
        }
        Out.flush();
    }

    void PrintVisitor::VisitFunDefCmd(const FunDefCmd* Cmd)
    {
      Out << GetIndent();
      Out <<"// define function " << endl;
      Cmd->GetSort()->Accept(this);
      Out << " " << ReformatFunctionName(Cmd->GetFunName()) << "( ";
      bool first=true;

      for (auto const& ASPair : Cmd->GetArgs()) {
      if (!first)
      Out << ", ";
      else
      first = false;
      ASPair->Accept(this);
      }
      Out << " )" << endl << "{" << endl;
      IndentLevel++;
      Out << GetIndent();
      Out << "return ";
      Cmd->GetTerm()->Accept(this);
      Out << ";";
      IndentLevel--;
      Out << endl << "}" << endl << endl;
    }

    void PrintVisitor::VisitFunDeclCmd(const FunDeclCmd* Cmd)
    {
      Out << "// Declare function" << endl;
      Cmd->GetSort()->Accept(this);
      Out << " " << ReformatFunctionName(Cmd->GetFunName()) << "( ";
      bool first=true;

      for (auto const& Sort : Cmd->GetArgSorts()) {
        if (!first)
        Out << ", ";
        else
        first = false;
        Sort->Accept(this);
        }
      Out << " );" << endl << endl;
    }

    void PrintVisitor::VisitSynthFunCmd(const SynthFunCmd* Cmd) 
    {
      Out << GetIndent();
        Out << "// Function to synthesise" << endl;
        Cmd->GetSort()->Accept(this);
        Out << " " << ReformatFunctionName(Cmd->GetFunName()) << "( const ";
        bool first=true;
        for(auto const& ASPair : Cmd->GetArgs()) {
          if(!first)
            Out<<", const ";
                    ASPair->Accept(this);
                    first=false;
                }
        Out << ")" << endl << "{" <<endl;

        IndentLevel++;
        Out <<GetIndent();
        for (auto const& ASPair : Cmd->GetArgs())
        {
          Out << "const ";
          ASPair->Accept(this);
          Out << "= 0u;"<<endl;
        }

        Cmd->GetSort()->Accept(this);
        Out << " result = 0u;" << endl;
        Out << GetIndent() << "__CPROVER_program_" << program_counter << ":;"<< endl;
        Out << GetIndent() << "return result;" << endl <<"}"<< endl;
        program_counter++;
        IndentLevel--;
    }

     void PrintVisitor::VisitSynthInvCmd(const SynthInvCmd* Cmd) 
    {  
       Out << " // Synthesise invariant \n";

   /*     string CmdName = Compile? "synth-fun" : "synth-inv";
        string RetSort = Compile? " Bool\n" : "\n ";

        Out << GetIndent() << "(" << CmdName << " " << Cmd->GetInvName() << " (";
        for(auto const& ASPair : Cmd->GetArgs()) {
            ASPair->Accept(this);
        }
        Out << ")" << RetSort; 
        IndentLevel++;
        
        if (!Cmd->GetGrammarRules().empty()) {
            Out << GetIndent() << "(";
            IndentLevel++;
            for(auto const& Rule : Cmd->GetGrammarRules()) {
                Rule->Accept(this);
                Out << endl;
            }
            IndentLevel--;
            Out << ")" << endl;
        }
        else if (Compile) { 
            string Error = "Currently the only implicit allowed grammar is LIA;"; 
            Error += " sorts are resitrincted to Bool and Int.";
            //Out << LogicGrammars[LogicName] << endl;
            
            Out << "((Start Bool (StartBool))" << endl;
            string BoolArgs = "";
            string IntArgs = "";
            for(auto const& ASPair : Cmd->GetArgs()) {
                if (ASPair->GetSort()->GetKind() == SORTKIND_BOOL)
                    BoolArgs += ASPair->GetName() + " ";
                else if (ASPair->GetSort()->GetKind() == SORTKIND_INT)
                    IntArgs += ASPair->GetName() + " ";
                else 
                    throw SynthLib2ParserException(Error);
            }
            Out << "(StartInt Int (" << IntArgs << LogicGrammars["StartInt"] << "))" << endl << endl;
            Out << "(ConstantInt Int (" << LogicGrammars["ConstantInt"] << "))" << endl;
            Out << "(StartBool Bool (" << BoolArgs << LogicGrammars["StartBool"] << ")))" << endl;
        }

        IndentLevel--;
        Out << ")" << endl << endl;*/
    }   

    void PrintVisitor::VisitSortDefCmd(const SortDefCmd* Cmd)
    {
        Out << GetIndent() << "//(define-sort " << Cmd->GetName() << " ";
        Cmd->GetSortExpr()->Accept(this);
        Out << ")" << endl << endl;
    }

    void PrintVisitor::VisitSetOptsCmd(const SetOptsCmd* Cmd)
    {
       /* Out << GetIndent() << "(set-opts (";
        IndentLevel++;
        for(auto const& Opt : Cmd->GetOpts()) {
            Out << endl << GetIndent() << "(" << Opt.first << " \"" << Opt.second << "\")";
        }
        Out << endl;
        IndentLevel--;
        Out << GetIndent() << "))" << endl << endl;*/
    }

    void PrintVisitor::VisitVarDeclCmd(const VarDeclCmd* Cmd)
    {
      if (cex_counter == 0)
      {
        Out << "void main(void)" << endl << "{" << endl;
        IndentLevel++;
      }
      Out << GetIndent() << "__CPROVER_counterexample_" << cex_counter << ":"
          << endl;
      cex_counter++;
      Out << GetIndent();
      Cmd->GetSort()->Accept(this);
      Out << " " << ReformatSymbol(Cmd->GetName()) << ";" << endl << endl;
    }

    void PrintVisitor::VisitPrimedVarDeclCmd(const PrimedVarDeclCmd* Cmd)
    {
        if (!Compile) {
          Out << GetIndent() << "(declare-primed-var " << Cmd->GetName() << " ";
          Cmd->GetSort()->Accept(this);
          Out << ")" << endl << endl;
        }
     /*   else {
          Out << GetIndent() << "(declare-var " << Cmd->GetName() << " ";
          Cmd->GetSort()->Accept(this);
          Out << ")" << endl;
          Out << GetIndent() << "(declare-var " << Cmd->GetName() << "! ";
          Cmd->GetSort()->Accept(this);
          Out << ")" << endl << endl;
        }*/
    }


    void PrintVisitor::VisitConstraintCmd(const ConstraintCmd* Cmd) 
    {
      Out << GetIndent();
      Out << "__CPROVER_assert( ";
      Cmd->GetTerm()->Accept(this);
      Out << ", \"\" );" <<endl << endl;
    }

    void PrintVisitor::VisitInvConstraintCmd(const InvConstraintCmd* Cmd) 
    {
    
       if (!Compile) {
            Out << "(inv-constraint " 
                << Cmd->GetSynthInvName() << " "
                << Cmd->GetPreCondName() << " "
                << Cmd->GetTransName() << " "
                << Cmd->GetPostCondName() << ") " <<endl;     
            return;
        }
        
        // else translate it to general SyGuS
        // (assumes "implies" is defined)
        // compile three constratins, for precond, trans, and postcond

        // Retrieve args and prepare a duplicate for use for trans
        string InvName = Cmd->GetSynthInvName();
        auto STE = TheSymbolTable->LookupInv(InvName);
        FunSortExpr* FSR = STE->GetInvSort();
        vector<const SortExpr*> Args = FSR->GetArgSorts();        

        const u32 NumArgs = Args.size();
        vector<const SortExpr*> ArgsArgs(2*NumArgs);
        for(u32 i = 0; i < NumArgs; ++i) { ArgsArgs[i] = Args[i];}
        for(u32 i = 0; i < NumArgs; ++i) { ArgsArgs[NumArgs+i] = ArgsArgs[i];}    
        
        // Find PreCond, print that it implies the invariant    

        auto STEpre = TheSymbolTable->LookupFun(Cmd->GetPreCondName(), Args);
        FunDefCmd* PreCond = STEpre->GetFunDef();  
        ostringstream PreArgsStr;
        for(auto const& ASPair : PreCond->GetArgs()) {
            PreArgsStr << " " << ASPair->GetName();
        } 

        Out << "(constraint (=>\n";
        Out << "            (" << PreCond->GetFunName() <<  PreArgsStr.str() << ")\n";
        Out << "            (" << InvName               <<  PreArgsStr.str() << ")\n";
        Out << ")) " <<endl <<endl; 

        // Find Trans, print that invariant and trans implies primed-invariant    

        auto STEtrans = TheSymbolTable->LookupFun(Cmd->GetTransName(), ArgsArgs);
        FunDefCmd* TransCond = STEtrans->GetFunDef();
        ostringstream AllTransArgs;
        ostringstream PrimedTransArgs;  
        ostringstream UnprimedTransArgs;    
        auto ASPairs = TransCond->GetArgs(); 
        for(u32 i=0; i < NumArgs; i++) {
            AllTransArgs << " " << ASPairs[i]->GetName();
            UnprimedTransArgs << " " << ASPairs[i]->GetName();
        } 
        for(u32 i=0; i < NumArgs; i++) {
            AllTransArgs << " " << ASPairs[NumArgs+i]->GetName(); 
            PrimedTransArgs << " " << ASPairs[NumArgs+i]->GetName(); 
        } 

        Out << "(constraint (=> \n";
        Out << "            (and (" << InvName << UnprimedTransArgs.str() << ")\n";
        Out << "                 (" << TransCond->GetFunName() << AllTransArgs.str() << "))\n";    
        Out << "            (" << InvName << PrimedTransArgs.str() << ")";
        Out << ")) " <<endl <<endl;    

        // Find PostCond, print that invariant implies it    

        auto STEpost = TheSymbolTable->LookupFun(Cmd->GetPostCondName(), Args);
        FunDefCmd* PostCond = STEpost->GetFunDef();  
        ostringstream PostArgsStr;
        for(auto const& ASPair : PostCond->GetArgs()) {
            PostArgsStr << " " << ASPair->GetName();
        } 

        Out << "(constraint (=>\n";
        Out << "            (" << InvName               <<  PostArgsStr.str() << ")\n";        
        Out << "            (" << PostCond->GetFunName() <<  PostArgsStr.str() << ")\n";
        Out << ")) " <<endl <<endl; 
    }


    void PrintVisitor::VisitSetLogicCmd(const SetLogicCmd* Cmd)
    {
        Out << GetIndent() << "//(set-logic " << Cmd->GetLogicName() << ")" << endl << endl;
    }

    void PrintVisitor::VisitCheckSynthCmd(const CheckSynthCmd* Cmd)
    {
       // Out << GetIndent() << "//(check-synth)" << endl << endl;
        Out << endl << "}"<<endl;
    }

    void PrintVisitor::VisitArgSortPair(const ArgSortPair* ASPair) 
    {
      ASPair->GetSort()->Accept(this);
      Out << " " << ReformatSymbol(ASPair->GetName()) <<" ";
    }
    
    void PrintVisitor::VisitIntSortExpr(const IntSortExpr* Sort)
    {
        Out << "unsigned int";
    }

    void PrintVisitor::VisitStringSortExpr(const StringSortExpr* Sort)
    {
        Out << "std::string";
    }

    void PrintVisitor::VisitBVSortExpr(const BVSortExpr* Sort)
    {
      Out << "unsigned __CPROVER_bitvector[" << Sort->GetSize() << "]";
    }

    void PrintVisitor::VisitNamedSortExpr(const NamedSortExpr* Sort)
    {
        Out << Sort->GetName();
    }

    void PrintVisitor::VisitArraySortExpr(const ArraySortExpr* Sort) 
    {
      Sort->GetDomainSort()->Accept(this);
        Out << "[";
        Sort->GetRangeSort()->Accept(this);
        Out << "]" << endl;
    }

    void PrintVisitor::VisitRealSortExpr(const RealSortExpr* Sort)
    {
        Out << "double";
    }

    void PrintVisitor::VisitFunSortExpr(const FunSortExpr* Sort)
    {
        // Do nothing!
    }

    void PrintVisitor::VisitBoolSortExpr(const BoolSortExpr* Sort)
    {
        Out << "__CPROVER_bool";
    }

    void PrintVisitor::VisitEnumSortExpr(const EnumSortExpr* Sort)
    {
      Out << "enum {";
      for(auto const& Con : Sort->GetConstructors()) {
                  Out << Con << ",";
              }
      Out <<"}";
    }
    
    void PrintVisitor::VisitLetBindingTerm(const LetBindingTerm* Binding)
    {
      Out <<"//local variable "<<endl;
      Binding->GetVarSort()->Accept(this);
      Out << " " << Binding->GetVarName() << " = ";
      Binding->GetBoundToTerm()->Accept(this);
      Out << ";" << endl << endl;

  /*
        Out << "(" << Binding->GetVarName() << " ";
	if (!SMTlet) {
	  Binding->GetVarSort()->Accept(this);
          Out << " ";
	}
        Binding->GetBoundToTerm()->Accept(this);
        Out << ")";*/
    }
    
    void PrintVisitor::VisitFunTerm(const FunTerm* TheTerm)
    {
      if(TheTerm ->GetArgs().size()==2 &&
            (String2OperatorMap.find(TheTerm->GetFunName())!=String2OperatorMap.end() ||
          BasicOperators.find(TheTerm->GetFunName())!=BasicOperators.end()))
        {
          Out << "(";
          TheTerm->GetArgs()[0]->Accept(this);
          Out << " "<< ReformatFunctionName(TheTerm->GetFunName()) << " ";
          TheTerm->GetArgs()[1]->Accept(this);
          Out << ")";
        }
        else if(TheTerm->GetArgs().size()==3 && TheTerm->GetFunName()=="ite")
        {
          Out <<"((";
          TheTerm->GetArgs()[0]->Accept(this);
          Out <<") ? (";
          TheTerm->GetArgs()[1]->Accept(this);
          Out << ") : (";
          TheTerm->GetArgs()[2]->Accept(this);
          Out << "))";
        }
        else if(TheTerm->GetFunName()=="=>" && TheTerm ->GetArgs().size()==2 )
        {
          Out <<"!( ";
          TheTerm->GetArgs()[0]->Accept(this);
          Out <<") || (";
          TheTerm->GetArgs()[1]->Accept(this);
          Out <<")";
        }
        else
        {
          Out << " "<< ReformatFunctionName(TheTerm->GetFunName()) << "( ";
        bool first = true;
        for (auto const& Arg : TheTerm->GetArgs()) {
        if (!first)
          Out << ", ";
        Arg->Accept(this);
        first = false;
        }
        Out << ")";
        }

    }

    void PrintVisitor::VisitLiteralTerm(const LiteralTerm* TheTerm)
    {
        TheTerm->GetLiteral()->Accept(this);
     }

    void PrintVisitor::VisitSymbolTerm(const SymbolTerm* TheTerm) 
    {
        Out << ReformatSymbol(TheTerm->GetSymbol());
    }

    void PrintVisitor::VisitLetTerm(const LetTerm* TheTerm)
    {
    //  Out <<"{" << endl;
        Out << GetIndent();

       // Out << "(let (" << endl;
      //    IndentLevel++;
          for(auto const& Binding : TheTerm->GetBindings()) {
              Binding->Accept(this);
          }
   //     Out << ")" << endl;
          Out << GetIndent();
          TheTerm->GetBoundInTerm()->Accept(this);
      //    IndentLevel--;
  //        Out << endl << GetIndent() << ")";
    }
    
    void PrintVisitor::VisitLetBindingGTerm(const LetBindingGTerm* Binding) 
    {
      Out <<" //";
      Binding->GetVarSort()->Accept(this);
      Out << endl;
      Out << ReformatSymbol(Binding->GetVarName()) << " = ";
      Binding->GetBoundToTerm()->Accept(this);
      Out << ";" << endl << endl;
    }
    
    void PrintVisitor::VisitFunGTerm(const FunGTerm* TheTerm) 
    {
      Out << " // Function G Term" << endl;
        Out << "(" << ReformatSymbol(TheTerm->GetName());
        for(auto const& Arg : TheTerm->GetArgs()) {
            Out << " ";
            Arg->Accept(this);
        }
        Out << ")" << endl;
    }

    void PrintVisitor::VisitLiteralGTerm(const LiteralGTerm* TheTerm) 
    {
        TheTerm->GetLiteral()->Accept(this);
    }

    void PrintVisitor::VisitSymbolGTerm(const SymbolGTerm* TheTerm) 
    {
        Out << TheTerm->GetSymbol();
    }

    void PrintVisitor::VisitLetGTerm(const LetGTerm* TheTerm) 
    {
        Out << "(let (" << endl;
        IndentLevel++;
        for(auto const& Binding : TheTerm->GetBindings()) {
            Binding->Accept(this);
        }
        Out << ")" << endl;
        Out << GetIndent();
        TheTerm->GetBoundInTerm()->Accept(this);
        IndentLevel--;
        Out << endl << GetIndent() << ")";        
    }

    void PrintVisitor::VisitConstantGTerm(const ConstantGTerm* TheTerm) 
    {
        Out << "(Constant ";
        TheTerm->GetSort()->Accept(this);
        Out << ")";
    }

    void PrintVisitor::VisitVariableGTerm(const VariableGTerm* TheTerm) 
    {
        switch (TheTerm->GetKind()) {
        case VARKIND_LOCAL:
            Out << "LocalVariable ";
            break;
        case VARKIND_INPUT:
            Out << "InputVariable ";
            break;
        case VARKIND_ANY:
            Out << "Variable ";
            break;
        }

        TheTerm->GetSort()->Accept(this);
        Out << ")";
    }
    
    void PrintVisitor::VisitNTDef(const NTDef* Def) 
    {
        Out << "(" << Def->GetName() << " ";
        Def->GetSort()->Accept(this);
        Out << " (" << endl;
        IndentLevel++;
        for(auto const& Expansion : Def->GetExpansions()) {
            Out << GetIndent();
            Expansion->Accept(this);
        }
        IndentLevel--;
        Out << "))";
        Out << endl << GetIndent();
    }

    void PrintVisitor::VisitLiteral(const Literal* TheLiteral) 
    {
        Out << ReformatLiteralString(TheLiteral->GetLiteralString());
    }

    // The << operator for AST bases
    ostream& operator << (ostream& Out, const ASTBase& AST)
    {
        PrintVisitor Printer(Out);
        AST.Accept(&Printer);
        return Out;
    }

    // The << operator for source locations
    ostream& operator << (ostream& Out, const SourceLocation& Location)
    {
        Out << Location.ToString();
        return Out;
    }


} /* end namespace */

