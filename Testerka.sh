for file in $2/*.in; do
start=`date +%s%N`
echo $q
test=${file%.in}.out
diff -bsq $test <(./$1 < $file) || break
end=`date +%s%N`
printf "%.3f%s\n" $(((end-start)/(10**6)))e-3 s
done
