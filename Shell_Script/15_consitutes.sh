touch lines
for files in $*
do
  tail -n -3 $files >> lines
done
