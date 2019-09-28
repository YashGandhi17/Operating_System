echo "Enter the file name to reverse the order"
read file
tac $file>${file}_temp
line=`cat ${file}_temp`
echo "${line// /.}">${file}_temp
rm $file
mv ${file}_temp $file
