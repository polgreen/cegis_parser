/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_DEFINE_SORT = 258,
     TK_DEFINE_FUN = 259,
     TK_DECLARE_FUN = 260,
     TK_SET_OPTIONS = 261,
     TK_CHECK_SYNTH = 262,
     TK_SYNTH_FUN = 263,
     TK_SYNTH_INV = 264,
     TK_DECLARE_VAR = 265,
     TK_DECLARE_PRIMED_VAR = 266,
     TK_LPAREN = 267,
     TK_RPAREN = 268,
     TK_SET_LOGIC = 269,
     TK_BV = 270,
     TK_INT = 271,
     TK_BOOL = 272,
     TK_ENUM = 273,
     TK_STRING = 274,
     TK_CONSTRAINT = 275,
     TK_INV_CONSTRAINT = 276,
     TK_CONSTANT = 277,
     TK_VARIABLE = 278,
     TK_LOCAL_VARIABLE = 279,
     TK_INPUT_VARIABLE = 280,
     TK_ERROR = 281,
     TK_DOUBLECOLON = 282,
     TK_LET = 283,
     TK_ARRAY = 284,
     TK_REAL = 285,
     TK_INT_LITERAL = 286,
     TK_REAL_LITERAL = 287,
     TK_BOOL_LITERAL = 288,
     TK_ENUM_LITERAL = 289,
     TK_BV_LITERAL = 290,
     TK_STRING_LITERAL = 291,
     TK_SYMBOL = 292,
     TK_QUOTED_LITERAL = 293
   };
#endif
/* Tokens.  */
#define TK_DEFINE_SORT 258
#define TK_DEFINE_FUN 259
#define TK_DECLARE_FUN 260
#define TK_SET_OPTIONS 261
#define TK_CHECK_SYNTH 262
#define TK_SYNTH_FUN 263
#define TK_SYNTH_INV 264
#define TK_DECLARE_VAR 265
#define TK_DECLARE_PRIMED_VAR 266
#define TK_LPAREN 267
#define TK_RPAREN 268
#define TK_SET_LOGIC 269
#define TK_BV 270
#define TK_INT 271
#define TK_BOOL 272
#define TK_ENUM 273
#define TK_STRING 274
#define TK_CONSTRAINT 275
#define TK_INV_CONSTRAINT 276
#define TK_CONSTANT 277
#define TK_VARIABLE 278
#define TK_LOCAL_VARIABLE 279
#define TK_INPUT_VARIABLE 280
#define TK_ERROR 281
#define TK_DOUBLECOLON 282
#define TK_LET 283
#define TK_ARRAY 284
#define TK_REAL 285
#define TK_INT_LITERAL 286
#define TK_REAL_LITERAL 287
#define TK_BOOL_LITERAL 288
#define TK_ENUM_LITERAL 289
#define TK_BV_LITERAL 290
#define TK_STRING_LITERAL 291
#define TK_SYMBOL 292
#define TK_QUOTED_LITERAL 293




/* Copy the first part of user declarations.  */
#line 1 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"

    #include <SynthLib2ParserIFace.hpp>
    #include <SymbolTable.hpp>
    #include <iostream>
    #include <string.h>
    #include <boost/lexical_cast.hpp>
    #include <LogicSymbols.hpp>
    
    using namespace std;
    using namespace SynthLib2Parser;

    namespace SynthLib2Bison {
        Program* TheProgram = NULL;
    }

    long yylinenum = 1;
    long yycolnum = 0;
    extern char* yytext;

    extern int yylex(void);
    int yyerror(char* s)
    {
        cerr << "Parse error: Last token read was: " << yytext
             << " at line: " << yylinenum << ", column: " 
             << yycolnum - strlen(yytext) << endl;
        cerr.flush();
        exit(1);
    }

    static inline SourceLocation GetCurrentLocation()
    {
        return SourceLocation(yylinenum, yycolnum);
    }


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 36 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
{
    // yyunion fields
    string* LexerString;
    pair<string, string>* EnumConstant;
    const SortExpr* TheSortExpr;
    Literal* TheLiteral;
    vector<string>* SymbolVector;
    ArgSortPair* SymbolSortPair;
    vector<const SortExpr*>* SortVector;
    vector<ArgSortPair*>* SymbolSortVector;
    pair<string, string>* SymbolSymbolPair;
    vector<pair<string, string> >* SymbolSymbolVector;
    Term* TheTerm;
    vector<Term*>* TermVector;
    LetBindingTerm* STPair;
    vector<LetBindingTerm*>* STPairVector;
    vector<NTDef*>* NTDefVector;
    NTDef* TheNTDef;
    GTerm* TheGTerm;
    vector<GTerm*>* GTermVector;
    LetBindingGTerm* SGPair;
    vector<LetBindingGTerm*>* SGPairVector;
    Program* TheProgram;
    ASTCmd* TheCmd;
    vector<ASTCmd*>* CmdList;
}
/* Line 193 of yacc.c.  */
#line 234 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 247 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   235

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    13,    18,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    51,    57,    63,    68,    70,    72,    74,    76,
      81,    87,    89,    91,    93,    95,    99,   101,   103,   107,
     110,   112,   117,   121,   124,   126,   131,   139,   148,   151,
     152,   156,   159,   160,   165,   170,   172,   174,   176,   184,
     187,   189,   195,   198,   199,   201,   203,   205,   207,   209,
     211,   214,   216,   224,   227,   229,   233,   238,   246,   256,
     263,   272,   278,   280,   282,   287,   292,   297,   302,   307,
     309,   317,   320,   322,   328,   331
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    41,    -1,    -1,    43,    44,    -1,    44,
      -1,    37,    -1,    12,    14,    42,    13,    -1,    44,    45,
      -1,    45,    -1,    62,    -1,    63,    -1,    80,    -1,    81,
      -1,    77,    -1,    78,    -1,    79,    -1,    48,    -1,    58,
      -1,    46,    -1,    47,    -1,    12,    10,    42,    49,    13,
      -1,    12,    11,    42,    49,    13,    -1,    12,     3,    42,
      49,    13,    -1,    12,    15,    50,    13,    -1,    16,    -1,
      17,    -1,    30,    -1,    19,    -1,    12,    18,    56,    13,
      -1,    12,    29,    49,    49,    13,    -1,    42,    -1,    31,
      -1,    33,    -1,    35,    -1,    42,    27,    42,    -1,    32,
      -1,    36,    -1,    12,    57,    13,    -1,    57,    42,    -1,
      42,    -1,    12,     6,    59,    13,    -1,    12,    60,    13,
      -1,    60,    61,    -1,    61,    -1,    12,    42,    38,    13,
      -1,    12,     4,    42,    65,    49,    68,    13,    -1,    12,
       5,    42,    12,    64,    13,    49,    13,    -1,    64,    49,
      -1,    -1,    12,    66,    13,    -1,    66,    67,    -1,    -1,
      12,    42,    49,    13,    -1,    12,    42,    72,    13,    -1,
      73,    -1,    42,    -1,    69,    -1,    12,    28,    12,    70,
      13,    68,    13,    -1,    70,    71,    -1,    71,    -1,    12,
      42,    49,    68,    13,    -1,    72,    68,    -1,    -1,    50,
      -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,    55,
      -1,    74,    75,    -1,    75,    -1,    12,    42,    49,    12,
      76,    13,    13,    -1,    76,    82,    -1,    82,    -1,    12,
       7,    13,    -1,    12,    20,    68,    13,    -1,    12,    21,
      42,    42,    42,    42,    13,    -1,    12,     8,    42,    65,
      49,    12,    74,    13,    13,    -1,    12,     8,    42,    65,
      49,    13,    -1,    12,     9,    42,    65,    12,    74,    13,
      13,    -1,    12,     9,    42,    65,    13,    -1,    42,    -1,
      73,    -1,    12,    42,    86,    13,    -1,    12,    22,    49,
      13,    -1,    12,    23,    49,    13,    -1,    12,    25,    49,
      13,    -1,    12,    24,    49,    13,    -1,    83,    -1,    12,
      28,    12,    84,    13,    82,    13,    -1,    84,    85,    -1,
      85,    -1,    12,    42,    49,    82,    13,    -1,    86,    82,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   114,   119,   127,   133,   138,   147,   152,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   170,   177,   184,   195,   205,   209,   213,   217,   221,
     226,   231,   237,   242,   247,   252,   260,   265,   272,   277,
     283,   290,   296,   301,   307,   314,   321,   330,   338,   341,
     343,   348,   354,   359,   365,   371,   375,   380,   385,   391,
     396,   402,   409,   415,   419,   424,   429,   438,   450,   455,
     461,   466,   472,   480,   485,   491,   496,   501,   511,   523,
     531,   540,   548,   553,   557,   563,   567,   571,   575,   579,
     584,   590,   595,   601,   608,   614
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_DEFINE_SORT", "TK_DEFINE_FUN",
  "TK_DECLARE_FUN", "TK_SET_OPTIONS", "TK_CHECK_SYNTH", "TK_SYNTH_FUN",
  "TK_SYNTH_INV", "TK_DECLARE_VAR", "TK_DECLARE_PRIMED_VAR", "TK_LPAREN",
  "TK_RPAREN", "TK_SET_LOGIC", "TK_BV", "TK_INT", "TK_BOOL", "TK_ENUM",
  "TK_STRING", "TK_CONSTRAINT", "TK_INV_CONSTRAINT", "TK_CONSTANT",
  "TK_VARIABLE", "TK_LOCAL_VARIABLE", "TK_INPUT_VARIABLE", "TK_ERROR",
  "TK_DOUBLECOLON", "TK_LET", "TK_ARRAY", "TK_REAL", "TK_INT_LITERAL",
  "TK_REAL_LITERAL", "TK_BOOL_LITERAL", "TK_ENUM_LITERAL", "TK_BV_LITERAL",
  "TK_STRING_LITERAL", "TK_SYMBOL", "TK_QUOTED_LITERAL", "$accept",
  "start", "Prog", "Symbol", "SetLogicCmd", "CmdPlus", "Cmd", "VarDeclCmd",
  "PrimedVarDeclCmd", "SortDefCmd", "SortExpr", "IntConst", "BoolConst",
  "BVConst", "EnumConst", "RealConst", "StringConst", "ECList",
  "SymbolPlus", "SetOptsCmd", "OptList", "SymbolPairPlus", "SymbolPair",
  "FunDefCmd", "FunDeclCmd", "SortStar", "ArgList", "SymbolSortPairStar",
  "SymbolSortPair", "Term", "LetTerm", "LetBindingTermPlus",
  "LetBindingTerm", "TermStar", "Literal", "NTDefPlus", "NTDef",
  "GTermPlus", "CheckSynthCmd", "ConstraintCmd", "InvConstraintCmd",
  "SynthFunCmd", "SynthInvCmd", "GTerm", "LetGTerm", "LetBindingGTermPlus",
  "LetBindingGTerm", "GTermStar", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    40,    41,    41,    42,    43,    44,    44,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    46,    47,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      57,    58,    59,    60,    60,    61,    62,    63,    64,    64,
      65,    66,    66,    67,    68,    68,    68,    68,    69,    70,
      70,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      74,    74,    75,    76,    76,    77,    78,    79,    80,    80,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    84,    84,    85,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     5,     4,     1,     1,     1,     1,     4,
       5,     1,     1,     1,     1,     3,     1,     1,     3,     2,
       1,     4,     3,     2,     1,     4,     7,     8,     2,     0,
       3,     2,     0,     4,     4,     1,     1,     1,     7,     2,
       1,     5,     2,     0,     1,     1,     1,     1,     1,     1,
       2,     1,     7,     2,     1,     3,     4,     7,     9,     6,
       8,     5,     1,     1,     4,     4,     4,     4,     4,     1,
       7,     2,     1,     5,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     0,     5,     9,    19,    20,    17,
      18,    10,    11,    14,    15,    16,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     4,     8,     6,     0,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,    32,    36,    33,
      34,    37,    56,    64,    65,    66,    67,    68,    69,     0,
      57,    55,     0,     0,    25,    26,    28,    27,    31,     0,
      52,     0,    49,     0,     0,    44,    41,     0,     0,     0,
       0,     7,     0,    63,     0,    76,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    42,    43,     0,     0,    81,
      21,    22,     0,     0,    35,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,    48,     0,     0,    79,     0,
       0,    71,     0,     0,    60,    54,    62,     0,    24,    40,
       0,    29,     0,     0,    46,     0,    45,     0,     0,     0,
      70,     0,     0,    59,    77,    38,    39,    30,     0,    47,
       0,     0,    80,     0,     0,    53,    78,     0,     0,    58,
       0,    82,    83,     0,    74,    89,    61,     0,     0,     0,
       0,     0,    95,     0,    73,     0,     0,     0,     0,     0,
       0,    72,    85,    86,    88,    87,     0,     0,    92,    84,
      94,     0,     0,    91,     0,     0,     0,    90,    93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    68,     4,     5,     6,     7,     8,     9,
      69,    53,    54,    55,    56,    57,    58,   108,   130,    10,
      39,    74,    75,    11,    12,    93,    71,    91,   112,    59,
      60,   123,   124,   103,    61,   120,   121,   163,    13,    14,
      15,    16,    17,   164,   165,   187,   188,   180
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -147
static const yytype_int16 yypact[] =
{
      21,   189,    36,  -147,    31,    31,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,    15,    15,
      15,    33,    50,    15,    15,    15,    15,    15,   115,    15,
    -147,   208,    31,  -147,  -147,   154,    42,    55,    61,    67,
    -147,    42,    42,   154,   154,    71,    -8,  -147,  -147,  -147,
    -147,  -147,    76,  -147,  -147,  -147,  -147,  -147,  -147,    73,
    -147,  -147,    15,     1,  -147,  -147,  -147,  -147,  -147,    75,
    -147,   154,  -147,    15,    10,  -147,  -147,   154,    12,    80,
      92,  -147,    94,  -147,    15,  -147,    15,    77,    95,   154,
    -147,    14,   115,   106,    79,  -147,  -147,    29,   104,  -147,
    -147,  -147,   108,    25,  -147,    15,   117,    15,   118,   154,
      15,  -147,  -147,   119,   154,  -147,   120,   104,  -147,    15,
      38,  -147,    15,    57,  -147,  -147,  -147,   121,  -147,  -147,
       2,  -147,   124,   154,  -147,   125,  -147,    59,   154,   131,
    -147,   154,   115,  -147,  -147,  -147,  -147,  -147,   136,  -147,
     140,   116,  -147,   115,   141,  -147,  -147,   128,   156,  -147,
     198,    76,  -147,    63,  -147,  -147,  -147,   154,   154,   154,
     154,   129,  -147,   159,  -147,   162,   164,   165,   167,   155,
      78,  -147,  -147,  -147,  -147,  -147,    15,    66,  -147,  -147,
    -147,   154,   128,  -147,   128,   168,   169,  -147,  -147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,  -147,   -18,  -147,   179,     8,  -147,  -147,  -147,
     -12,    98,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,   112,  -147,  -147,  -147,    41,  -147,  -147,   -89,
    -147,  -147,    64,  -147,  -145,    72,  -116,  -147,  -147,  -147,
    -147,  -147,  -147,  -146,  -147,  -147,     3,  -147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      35,    36,    37,   113,   140,    41,    42,    43,    44,    45,
      52,    62,   162,    33,   126,   145,    87,   174,   162,    88,
      82,   140,    73,    95,    98,    99,   110,   111,    83,    34,
      89,    79,    80,     1,   190,   162,    30,    46,   125,    34,
      33,   117,   118,    31,    86,    38,   195,   162,   196,   162,
     119,   139,    34,   154,    70,    94,    47,    48,    49,    92,
      50,    51,    34,    40,   158,    97,   104,    72,   105,   122,
     142,   119,   150,    73,    52,   160,   173,   109,   186,   192,
      76,   115,    77,    78,    81,    52,    85,   127,    90,   129,
     160,   189,   133,   100,    47,    48,    49,   132,    50,    51,
      34,   138,   135,    84,   141,   101,   102,   107,    47,    47,
      48,    49,   146,    50,    51,    34,   119,   116,    63,   114,
     122,   148,    64,    65,    52,    66,   151,    46,   157,   153,
     128,   131,   134,   136,   144,    52,    67,   147,   149,   161,
     160,   179,   172,    34,   152,   161,    47,    48,    49,   155,
      50,    51,    34,   156,   159,   175,   176,   177,   178,    47,
      48,    49,   161,    50,    51,    34,    63,   186,   191,   166,
      64,    65,   181,    66,   161,   182,   161,   183,   184,   194,
     185,   197,   198,    32,    67,   106,    96,   143,     0,   137,
     193,    34,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     167,   168,   169,   170,     0,     0,   171,     0,    28,    29,
       0,     0,     0,     0,     0,    34
};

static const yytype_int16 yycheck[] =
{
      18,    19,    20,    92,   120,    23,    24,    25,    26,    27,
      28,    29,   157,     5,   103,    13,    15,   163,   163,    18,
      28,   137,    12,    13,    12,    13,    12,    13,    46,    37,
      29,    43,    44,    12,   180,   180,     0,    12,    13,    37,
      32,    12,    13,    12,    62,    12,   192,   192,   194,   194,
      12,    13,    37,   142,    12,    73,    31,    32,    33,    71,
      35,    36,    37,    13,   153,    77,    84,    12,    86,    12,
      13,    12,    13,    12,    92,    12,    13,    89,    12,    13,
      13,    93,    41,    42,    13,   103,    13,   105,    13,   107,
      12,    13,   110,    13,    31,    32,    33,   109,    35,    36,
      37,   119,   114,    27,   122,    13,    12,    12,    31,    31,
      32,    33,   130,    35,    36,    37,    12,    38,    12,    13,
      12,   133,    16,    17,   142,    19,   138,    12,    12,   141,
      13,    13,    13,    13,    13,   153,    30,    13,    13,   157,
      12,    12,   160,    37,    13,   163,    31,    32,    33,    13,
      35,    36,    37,    13,    13,   167,   168,   169,   170,    31,
      32,    33,   180,    35,    36,    37,    12,    12,   186,    13,
      16,    17,    13,    19,   192,    13,   194,    13,    13,   191,
      13,    13,    13,     4,    30,    87,    74,   123,    -1,   117,
     187,    37,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    40,    41,    43,    44,    45,    46,    47,    48,
      58,    62,    63,    77,    78,    79,    80,    81,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    14,    20,    21,
       0,    12,    44,    45,    37,    42,    42,    42,    12,    59,
      13,    42,    42,    42,    42,    42,    12,    31,    32,    33,
      35,    36,    42,    50,    51,    52,    53,    54,    55,    68,
      69,    73,    42,    12,    16,    17,    19,    30,    42,    49,
      12,    65,    12,    12,    60,    61,    13,    65,    65,    49,
      49,    13,    28,    42,    27,    13,    42,    15,    18,    29,
      13,    66,    49,    64,    42,    13,    61,    49,    12,    13,
      13,    13,    12,    72,    42,    42,    50,    12,    56,    49,
      12,    13,    67,    68,    13,    49,    38,    12,    13,    12,
      74,    75,    12,    70,    71,    13,    68,    42,    13,    42,
      57,    13,    49,    42,    13,    49,    13,    74,    42,    13,
      75,    42,    13,    71,    13,    13,    42,    13,    49,    13,
      13,    49,    13,    49,    68,    13,    13,    12,    68,    13,
      12,    42,    73,    76,    82,    83,    13,    22,    23,    24,
      25,    28,    42,    13,    82,    49,    49,    49,    49,    12,
      86,    13,    13,    13,    13,    13,    12,    84,    85,    13,
      82,    42,    13,    85,    49,    82,    82,    13,    13
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 112 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    { SynthLib2Bison::TheProgram = (yyvsp[(1) - (1)].TheProgram); ;}
    break;

  case 3:
#line 114 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {   
          vector<ASTCmd*> Dummy;
          SynthLib2Bison::TheProgram = new Program(Dummy);
      ;}
    break;

  case 4:
#line 120 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    { 
         vector<ASTCmd*> AllCmds;
         AllCmds.push_back((yyvsp[(1) - (2)].TheCmd));
         AllCmds.insert(AllCmds.end(), (yyvsp[(2) - (2)].CmdList)->begin(), (yyvsp[(2) - (2)].CmdList)->end());
         delete (yyvsp[(2) - (2)].CmdList);
         (yyval.TheProgram) = new Program(AllCmds);
     ;}
    break;

  case 5:
#line 128 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
         (yyval.TheProgram) = new Program(*(yyvsp[(1) - (1)].CmdList));
         delete (yyvsp[(1) - (1)].CmdList);
     ;}
    break;

  case 6:
#line 134 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
           (yyval.LexerString) = (yyvsp[(1) - (1)].LexerString);
       ;}
    break;

  case 7:
#line 139 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                if(*(yyvsp[(3) - (4)].LexerString) != "LIA" && *(yyvsp[(3) - (4)].LexerString) != "Reals" && *(yyvsp[(3) - (4)].LexerString) != "Arrays" && *(yyvsp[(3) - (4)].LexerString) != "BV" && *(yyvsp[(3) - (4)].LexerString) != "S" && *(yyvsp[(3) - (4)].LexerString) != "SLIA") {
                    throw SynthLib2ParserException("Invalid logic in set logic command");
                }
                (yyval.TheCmd) = new SetLogicCmd(GetCurrentLocation(), *(yyvsp[(3) - (4)].LexerString));
                delete (yyvsp[(3) - (4)].LexerString);
            ;}
    break;

  case 8:
#line 148 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.CmdList) = (yyvsp[(1) - (2)].CmdList);
            (yyval.CmdList)->push_back((yyvsp[(2) - (2)].TheCmd));
        ;}
    break;

  case 9:
#line 153 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.CmdList) = new vector<ASTCmd*>();
            (yyval.CmdList)->push_back((yyvsp[(1) - (1)].TheCmd));
        ;}
    break;

  case 21:
#line 171 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
               (yyval.TheCmd) = new VarDeclCmd(GetCurrentLocation(), 
                                   *(yyvsp[(3) - (5)].LexerString), (yyvsp[(4) - (5)].TheSortExpr));
               delete (yyvsp[(3) - (5)].LexerString);
           ;}
    break;

  case 22:
#line 178 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
               (yyval.TheCmd) = new PrimedVarDeclCmd(GetCurrentLocation(), 
                                   *(yyvsp[(3) - (5)].LexerString), (yyvsp[(4) - (5)].TheSortExpr));
               delete (yyvsp[(3) - (5)].LexerString);
           ;}
    break;

  case 23:
#line 185 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
               (yyval.TheCmd) = new SortDefCmd(GetCurrentLocation(),
                                   *(yyvsp[(3) - (5)].LexerString), (yyvsp[(4) - (5)].TheSortExpr));
               if ((yyvsp[(4) - (5)].TheSortExpr)->GetKind() == SORTKIND_ENUM) {
                   auto SortExprAsEnum = dynamic_cast<const EnumSortExpr*>((yyvsp[(4) - (5)].TheSortExpr));
                   SortExprAsEnum->SetEnumSortName(*(yyvsp[(3) - (5)].LexerString));
               }
               delete (yyvsp[(3) - (5)].LexerString);
           ;}
    break;

  case 24:
#line 196 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             if (boost::lexical_cast<u32>(*(yyvsp[(3) - (4)].LexerString)) == 0) {
                 throw SynthLib2ParserException("Zero-length bitvectors not supported.\n" +
                                                GetCurrentLocation().ToString());
             }
             (yyval.TheSortExpr) = new BVSortExpr(GetCurrentLocation(),
                                 boost::lexical_cast<u32>(*(yyvsp[(3) - (4)].LexerString)));
             delete (yyvsp[(3) - (4)].LexerString);
         ;}
    break;

  case 25:
#line 206 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TheSortExpr) = new IntSortExpr(GetCurrentLocation());
         ;}
    break;

  case 26:
#line 210 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TheSortExpr) = new BoolSortExpr(GetCurrentLocation());
         ;}
    break;

  case 27:
#line 214 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TheSortExpr) = new RealSortExpr(GetCurrentLocation());
         ;}
    break;

  case 28:
#line 218 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TheSortExpr) = new StringSortExpr(GetCurrentLocation());
         ;}
    break;

  case 29:
#line 222 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TheSortExpr) = new EnumSortExpr(GetCurrentLocation(), *(yyvsp[(3) - (4)].SymbolVector));
             delete (yyvsp[(3) - (4)].SymbolVector);
         ;}
    break;

  case 30:
#line 227 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TheSortExpr) = new ArraySortExpr(GetCurrentLocation(),
                                    (yyvsp[(3) - (5)].TheSortExpr), (yyvsp[(4) - (5)].TheSortExpr));
         ;}
    break;

  case 31:
#line 232 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TheSortExpr) = new NamedSortExpr(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString));
             delete (yyvsp[(1) - (1)].LexerString);
         ;}
    break;

  case 32:
#line 238 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.LexerString) = (yyvsp[(1) - (1)].LexerString);
         ;}
    break;

  case 33:
#line 243 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.LexerString) = (yyvsp[(1) - (1)].LexerString);
          ;}
    break;

  case 34:
#line 248 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.LexerString) = (yyvsp[(1) - (1)].LexerString);
        ;}
    break;

  case 35:
#line 253 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              auto ConCat = new string(*(yyvsp[(1) - (3)].LexerString) + "::" + *(yyvsp[(3) - (3)].LexerString));
              delete (yyvsp[(1) - (3)].LexerString);
              delete (yyvsp[(3) - (3)].LexerString);
              (yyval.LexerString) = ConCat;
          ;}
    break;

  case 36:
#line 261 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.LexerString) = (yyvsp[(1) - (1)].LexerString);
          ;}
    break;

  case 37:
#line 266 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {   
              auto StringConst = new string(*(yyvsp[(1) - (1)].LexerString));
	      delete (yyvsp[(1) - (1)].LexerString);
              (yyval.LexerString) = StringConst;
          ;}
    break;

  case 38:
#line 273 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
           (yyval.SymbolVector) = (yyvsp[(2) - (3)].SymbolVector);
       ;}
    break;

  case 39:
#line 278 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
               (yyval.SymbolVector) = (yyvsp[(1) - (2)].SymbolVector);
               (yyval.SymbolVector)->push_back(*(yyvsp[(2) - (2)].LexerString));
               delete (yyvsp[(2) - (2)].LexerString);
           ;}
    break;

  case 40:
#line 284 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
               (yyval.SymbolVector) = new vector<string>();
               (yyval.SymbolVector)->push_back(*(yyvsp[(1) - (1)].LexerString));
               delete (yyvsp[(1) - (1)].LexerString);
           ;}
    break;

  case 41:
#line 291 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
               (yyval.TheCmd) = new SetOptsCmd(GetCurrentLocation(), *(yyvsp[(3) - (4)].SymbolSymbolVector));
               delete (yyvsp[(3) - (4)].SymbolSymbolVector);
           ;}
    break;

  case 42:
#line 297 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.SymbolSymbolVector) = (yyvsp[(2) - (3)].SymbolSymbolVector);
        ;}
    break;

  case 43:
#line 302 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                   (yyval.SymbolSymbolVector) = (yyvsp[(1) - (2)].SymbolSymbolVector);
                   (yyval.SymbolSymbolVector)->push_back(*(yyvsp[(2) - (2)].SymbolSymbolPair));
                   delete (yyvsp[(2) - (2)].SymbolSymbolPair);
               ;}
    break;

  case 44:
#line 308 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                   (yyval.SymbolSymbolVector) = new vector<pair<string, string> >();
                   (yyval.SymbolSymbolVector)->push_back(*(yyvsp[(1) - (1)].SymbolSymbolPair));
                   delete (yyvsp[(1) - (1)].SymbolSymbolPair);
               ;}
    break;

  case 45:
#line 315 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
               (yyval.SymbolSymbolPair) = new pair<string, string>(*(yyvsp[(2) - (4)].LexerString), (yyvsp[(3) - (4)].LexerString)->substr(1, (yyvsp[(3) - (4)].LexerString)->length() - 2));
               delete (yyvsp[(2) - (4)].LexerString);
               delete (yyvsp[(3) - (4)].LexerString);
           ;}
    break;

  case 46:
#line 322 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.TheCmd) = new FunDefCmd(GetCurrentLocation(),
                                 *(yyvsp[(3) - (7)].LexerString), *(yyvsp[(4) - (7)].SymbolSortVector), (yyvsp[(5) - (7)].TheSortExpr), (yyvsp[(6) - (7)].TheTerm), NULL);

              delete (yyvsp[(3) - (7)].LexerString);
              delete (yyvsp[(4) - (7)].SymbolSortVector);
          ;}
    break;

  case 47:
#line 331 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
               (yyval.TheCmd) = new FunDeclCmd(GetCurrentLocation(),
                                   *(yyvsp[(3) - (8)].LexerString), *(yyvsp[(5) - (8)].SortVector), (yyvsp[(7) - (8)].TheSortExpr));
               delete (yyvsp[(3) - (8)].LexerString);
               delete (yyvsp[(5) - (8)].SortVector);
           ;}
    break;

  case 48:
#line 339 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    { (yyval.SortVector) = (yyvsp[(1) - (2)].SortVector); (yyval.SortVector)->push_back((yyvsp[(2) - (2)].TheSortExpr)); ;}
    break;

  case 49:
#line 341 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    { (yyval.SortVector) = new vector<const SortExpr*>(); ;}
    break;

  case 50:
#line 344 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.SymbolSortVector) = (yyvsp[(2) - (3)].SymbolSortVector);
        ;}
    break;

  case 51:
#line 349 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                       (yyval.SymbolSortVector) = (yyvsp[(1) - (2)].SymbolSortVector);
                       (yyval.SymbolSortVector)->push_back((yyvsp[(2) - (2)].SymbolSortPair));
                   ;}
    break;

  case 52:
#line 354 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                       (yyval.SymbolSortVector) = new vector<ArgSortPair*>();
                   ;}
    break;

  case 53:
#line 360 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                   (yyval.SymbolSortPair) = new ArgSortPair(GetCurrentLocation(), *(yyvsp[(2) - (4)].LexerString), (yyvsp[(3) - (4)].TheSortExpr));
                   delete (yyvsp[(2) - (4)].LexerString);
               ;}
    break;

  case 54:
#line 366 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
         (yyval.TheTerm) = new FunTerm(GetCurrentLocation(), *(yyvsp[(2) - (4)].LexerString), *(yyvsp[(3) - (4)].TermVector));
         delete (yyvsp[(2) - (4)].LexerString);
         delete (yyvsp[(3) - (4)].TermVector);
     ;}
    break;

  case 55:
#line 372 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
         (yyval.TheTerm) = new LiteralTerm(GetCurrentLocation(), (yyvsp[(1) - (1)].TheLiteral));
     ;}
    break;

  case 56:
#line 376 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
         (yyval.TheTerm) = new SymbolTerm(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString));
         delete (yyvsp[(1) - (1)].LexerString);
     ;}
    break;

  case 57:
#line 381 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
         (yyval.TheTerm) = (yyvsp[(1) - (1)].TheTerm);
     ;}
    break;

  case 58:
#line 386 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.TheTerm) = new LetTerm(GetCurrentLocation(), *(yyvsp[(4) - (7)].STPairVector), (yyvsp[(6) - (7)].TheTerm), new SymbolTableScope());
            delete (yyvsp[(4) - (7)].STPairVector);
        ;}
    break;

  case 59:
#line 392 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                       (yyval.STPairVector) = (yyvsp[(1) - (2)].STPairVector);
                       (yyval.STPairVector)->push_back((yyvsp[(2) - (2)].STPair));
                   ;}
    break;

  case 60:
#line 397 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                       (yyval.STPairVector) = new vector<LetBindingTerm*>();
                       (yyval.STPairVector)->push_back((yyvsp[(1) - (1)].STPair));
                   ;}
    break;

  case 61:
#line 403 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                   (yyval.STPair) = new LetBindingTerm(GetCurrentLocation(),
                                           *(yyvsp[(2) - (5)].LexerString), (yyvsp[(3) - (5)].TheSortExpr), (yyvsp[(4) - (5)].TheTerm));
                   delete (yyvsp[(2) - (5)].LexerString);
               ;}
    break;

  case 62:
#line 410 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TermVector) = (yyvsp[(1) - (2)].TermVector);
             (yyval.TermVector)->push_back((yyvsp[(2) - (2)].TheTerm));
         ;}
    break;

  case 63:
#line 415 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TermVector) = new vector<Term*>();
         ;}
    break;

  case 64:
#line 420 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.TheLiteral) = new Literal(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString), new IntSortExpr(SourceLocation::None));
            delete (yyvsp[(1) - (1)].LexerString);
        ;}
    break;

  case 65:
#line 425 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.TheLiteral) = new Literal(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString), new BoolSortExpr(SourceLocation::None));
            delete (yyvsp[(1) - (1)].LexerString);
        ;}
    break;

  case 66:
#line 430 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            if ((*(yyvsp[(1) - (1)].LexerString))[1] == 'x') {
                (yyval.TheLiteral) = new Literal(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString), new BVSortExpr(SourceLocation::None, ((yyvsp[(1) - (1)].LexerString)->length() - 2) * 4));
            } else {
                (yyval.TheLiteral) = new Literal(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString), new BVSortExpr(SourceLocation::None, ((yyvsp[(1) - (1)].LexerString)->length() - 2)));
            }
            delete (yyvsp[(1) - (1)].LexerString);
        ;}
    break;

  case 67:
#line 439 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            // Lookup the type of the enumeration
            auto ConstString = *(yyvsp[(1) - (1)].LexerString);
            vector<string> Tokens;
            boost::algorithm::split(Tokens, ConstString, boost::algorithm::is_any_of(": "),
                                    boost::algorithm::token_compress_on);
            auto SortString = Tokens[0];
            SortExpr* Sort = new NamedSortExpr(SourceLocation::None, SortString);
            (yyval.TheLiteral) = new Literal(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString), Sort);
            delete (yyvsp[(1) - (1)].LexerString);
        ;}
    break;

  case 68:
#line 451 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.TheLiteral) = new Literal(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString), new RealSortExpr(SourceLocation::None));
            delete (yyvsp[(1) - (1)].LexerString);
        ;}
    break;

  case 69:
#line 456 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
            (yyval.TheLiteral) = new Literal(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString), new StringSortExpr(SourceLocation::None));
            delete (yyvsp[(1) - (1)].LexerString);
        ;}
    break;

  case 70:
#line 462 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.NTDefVector) = (yyvsp[(1) - (2)].NTDefVector);
              (yyval.NTDefVector)->push_back((yyvsp[(2) - (2)].TheNTDef));
          ;}
    break;

  case 71:
#line 467 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.NTDefVector) = new vector<NTDef*>();
              (yyval.NTDefVector)->push_back((yyvsp[(1) - (1)].TheNTDef));
          ;}
    break;

  case 72:
#line 473 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheNTDef) = new NTDef(GetCurrentLocation(),
                         *(yyvsp[(2) - (7)].LexerString), (yyvsp[(3) - (7)].TheSortExpr), *(yyvsp[(5) - (7)].GTermVector));
          delete (yyvsp[(2) - (7)].LexerString);
          delete (yyvsp[(5) - (7)].GTermVector);
      ;}
    break;

  case 73:
#line 481 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.GTermVector) = (yyvsp[(1) - (2)].GTermVector);
              (yyval.GTermVector)->push_back((yyvsp[(2) - (2)].TheGTerm));
          ;}
    break;

  case 74:
#line 486 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.GTermVector) = new vector<GTerm*>();
              (yyval.GTermVector)->push_back((yyvsp[(1) - (1)].TheGTerm));
          ;}
    break;

  case 75:
#line 492 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                  (yyval.TheCmd) = new CheckSynthCmd(GetCurrentLocation());
              ;}
    break;

  case 76:
#line 497 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                  (yyval.TheCmd) = new ConstraintCmd(GetCurrentLocation(), (yyvsp[(3) - (4)].TheTerm));
              ;}
    break;

  case 77:
#line 502 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                  (yyval.TheCmd) = new InvConstraintCmd(GetCurrentLocation(), *(yyvsp[(3) - (7)].LexerString), *(yyvsp[(4) - (7)].LexerString), *(yyvsp[(5) - (7)].LexerString), *(yyvsp[(6) - (7)].LexerString));

                  delete (yyvsp[(3) - (7)].LexerString);
                  delete (yyvsp[(4) - (7)].LexerString);
                  delete (yyvsp[(5) - (7)].LexerString);
                  delete (yyvsp[(6) - (7)].LexerString);
              ;}
    break;

  case 78:
#line 513 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                (yyval.TheCmd) = new SynthFunCmd(GetCurrentLocation(), *(yyvsp[(3) - (9)].LexerString),
                                     *(yyvsp[(4) - (9)].SymbolSortVector), (yyvsp[(5) - (9)].TheSortExpr), *(yyvsp[(7) - (9)].NTDefVector), new SymbolTableScope());


                delete (yyvsp[(3) - (9)].LexerString);
                delete (yyvsp[(4) - (9)].SymbolSortVector);
                delete (yyvsp[(7) - (9)].NTDefVector);
            ;}
    break;

  case 79:
#line 524 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                (yyval.TheCmd) = new SynthFunCmd(GetCurrentLocation(), *(yyvsp[(3) - (6)].LexerString),
                                     *(yyvsp[(4) - (6)].SymbolSortVector), (yyvsp[(5) - (6)].TheSortExpr), new SymbolTableScope());
                delete (yyvsp[(3) - (6)].LexerString);
                delete (yyvsp[(4) - (6)].SymbolSortVector);
            ;}
    break;

  case 80:
#line 533 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                (yyval.TheCmd) = new SynthInvCmd(GetCurrentLocation(), 
                                     *(yyvsp[(3) - (8)].LexerString), *(yyvsp[(4) - (8)].SymbolSortVector), *(yyvsp[(6) - (8)].NTDefVector), new SymbolTableScope());
                delete (yyvsp[(3) - (8)].LexerString);
                delete (yyvsp[(6) - (8)].NTDefVector);
            ;}
    break;

  case 81:
#line 541 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                (yyval.TheCmd) = new SynthInvCmd(GetCurrentLocation(), 
                                     *(yyvsp[(3) - (5)].LexerString), *(yyvsp[(4) - (5)].SymbolSortVector), new SymbolTableScope());
                delete (yyvsp[(3) - (5)].LexerString);
            ;}
    break;

  case 82:
#line 549 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheGTerm) = new SymbolGTerm(GetCurrentLocation(), *(yyvsp[(1) - (1)].LexerString));
          delete (yyvsp[(1) - (1)].LexerString);
      ;}
    break;

  case 83:
#line 554 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheGTerm) = new LiteralGTerm(GetCurrentLocation(), (yyvsp[(1) - (1)].TheLiteral));
      ;}
    break;

  case 84:
#line 558 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheGTerm) = new FunGTerm(GetCurrentLocation(), *(yyvsp[(2) - (4)].LexerString), *(yyvsp[(3) - (4)].GTermVector));
          delete (yyvsp[(2) - (4)].LexerString);
          delete (yyvsp[(3) - (4)].GTermVector);
      ;}
    break;

  case 85:
#line 564 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheGTerm) = new ConstantGTerm(GetCurrentLocation(), (yyvsp[(3) - (4)].TheSortExpr));
      ;}
    break;

  case 86:
#line 568 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheGTerm) = new VariableGTerm(GetCurrentLocation(), (yyvsp[(3) - (4)].TheSortExpr), VARKIND_ANY);
      ;}
    break;

  case 87:
#line 572 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheGTerm) = new VariableGTerm(GetCurrentLocation(), (yyvsp[(3) - (4)].TheSortExpr), VARKIND_INPUT);
      ;}
    break;

  case 88:
#line 576 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheGTerm) = new VariableGTerm(GetCurrentLocation(), (yyvsp[(3) - (4)].TheSortExpr), VARKIND_LOCAL);
      ;}
    break;

  case 89:
#line 580 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
          (yyval.TheGTerm) = (yyvsp[(1) - (1)].TheGTerm);
      ;}
    break;

  case 90:
#line 585 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
             (yyval.TheGTerm) = new LetGTerm(GetCurrentLocation(), *(yyvsp[(4) - (7)].SGPairVector), (yyvsp[(6) - (7)].TheGTerm), new SymbolTableScope());
             delete (yyvsp[(4) - (7)].SGPairVector);
         ;}
    break;

  case 91:
#line 591 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                        (yyval.SGPairVector) = (yyvsp[(1) - (2)].SGPairVector);
                        (yyval.SGPairVector)->push_back((yyvsp[(2) - (2)].SGPair));
                    ;}
    break;

  case 92:
#line 596 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                        (yyval.SGPairVector) = new vector<LetBindingGTerm*>();
                        (yyval.SGPairVector)->push_back((yyvsp[(1) - (1)].SGPair));
                    ;}
    break;

  case 93:
#line 602 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
                    (yyval.SGPair) = new LetBindingGTerm(GetCurrentLocation(),
                                             *(yyvsp[(2) - (5)].LexerString), (yyvsp[(3) - (5)].TheSortExpr), (yyvsp[(4) - (5)].TheGTerm));
                    delete (yyvsp[(2) - (5)].LexerString);
                ;}
    break;

  case 94:
#line 609 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.GTermVector) = (yyvsp[(1) - (2)].GTermVector);
              (yyval.GTermVector)->push_back((yyvsp[(2) - (2)].TheGTerm));
          ;}
    break;

  case 95:
#line 614 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.y"
    {
              (yyval.GTermVector) = new vector<GTerm*>();
          ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2322 "/Users/elipol/SyGuS_parser//src/SynthLib2Parser.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



