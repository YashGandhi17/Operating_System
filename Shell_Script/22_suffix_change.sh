for file in *.txt
do
  len=${#f}
  len_1=$((len-4))
  file_name="${f::$len_1}"
  mv "$f" "$file_name.dat"
done
