#!/bin/bash

for f in *.sl; do
echo $f
SynthLib2Tester $f  $f.BV false

#sed -i -e 's/(set-logic LIA)/(set-logic BV)/g' $f
#sed -i -e 's/Int/(_ BitVec 32)/g' $f

sed -i -e 's/\>=/bvuge /g'  $f.BV
sed -i -e 's/\<=/bvule /g'  $f.BV 
sed -i -e 's/\>/bvugt /g'  $f.BV
sed -i -e 's/\</bvult /g'  $f.BV

if grep -q "has negative numbers" $f.BV
then
sed -i -e 's/bvuge/bvsge /g'  $f.BV
sed -i -e 's/bvule/bvsle /g'  $f.BV 
sed -i -e 's/bvugt/bvsgt /g'  $f.BV
sed -i -e 's/bvult/bvslt /g'  $f.BV
fi


sed -i -e 's/\+/bvadd /g'  $f.BV
sed -i -e 's/\*/bvmul /g'  $f.BV
sed -i -e 's/\-[[:space:]]/bvsub /g'  $f.BV

sed -i -e 's/\-/_/g'  $f.BV

sed -i -e 's/inv\_constraint/inv-constraint/g'  $f.BV
sed -i -e 's/define\_fun/define-fun/g'  $f.BV
sed -i -e 's/declare\_primed\_var/declare-primed-var/g'  $f.BV
sed -i -e 's/define\_fun/define-fun/g'  $f.BV
sed -i -e 's/inv\_constraint/inv-constraint/g'  $f.BV
sed -i -e 's/check\_synth/check-synth/g'  $f.BV
sed -i -e 's/set\_logic/set-logic/g'  $f.BV
sed -i -e 's/synth\_inv/synth-inv/g'  $f.BV
sed -i -e  's/synth\_fun/synth-fun/g'  $f.BV

done

rm *-e
rm *_tmp
mkdir BV_benchmarks
mv *.BV BV_benchmarks
cd BV_benchmarks
rename -S .sl.BV .sl *.sl.BV

for f in *.sl; do
gtimeout 15 cvc4 $f
done