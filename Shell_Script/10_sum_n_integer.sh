total=0
for i in $*
do
	total=$((total+i))	
	
done
echo "sum is "$total


 	
#bash 10_sum_n_integer.sh 3 4 5 6
#sum is 18
