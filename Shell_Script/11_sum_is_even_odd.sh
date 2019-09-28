total=0
for i in $*
do
	total=$((total+i))
	
done
echo "sum is "$total
s=$(($total % 2))
if [ $s -eq 0 ]
then 
	echo "sum is even"
else
	echo "sum is odd"
fi

#bash 11_sum_is_even_odd.sh 8 3 5 2
#sum is 18
#sum is even
