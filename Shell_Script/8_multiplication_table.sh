echo "Enter a number"
read a
for((i=1;i<11;i++))
do
	X= `expr $a * $i`
	echo $a " * " $i " = " $X
done

