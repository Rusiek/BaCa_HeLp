wstart=`date +%s%N`
for t in $2/*.in; do
start=`date +%s%N`
echo $q
o=${t%.in}.out
diff -bsq $o <(./$1 < $t) || break
end=`date +%s%N`
printf "%.3f%s\n" $(((end-start)/(10**6)))e-3 s
done
wend=`date +%s%N`
printf "%s%.3f%s\n" Wszystkie testy zaliczone w $(((wend-wstart)/(10**6)))e-3 sekund!
