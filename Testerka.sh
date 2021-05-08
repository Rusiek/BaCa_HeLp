for t in $2/*.in; do
echo $q
o=${t%.in}.out
diff -bsq $o <(./$1 < $t) || break
done
