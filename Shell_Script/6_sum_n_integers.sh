echo "Enter a number"
read a
sum=0
for((i=1;i<=a;i++))
do
	sum=$((sum+$i))
done
echo "sum of first " $a " integers is " $sum

#Enter a number
#7
#sum of first  7  integers is  28
