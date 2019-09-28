echo "Enter number"
read n
c=0
for((i=2;i<n;i++))
do	
	s=$(($n % $i))
	if [ $s -eq 0 ]
	then 
		c=1
	fi
done

if [ $c -eq 0 ]
then
	echo "number is prime"
else
	echo "number is not prime"
fi

#Enter number
#23
#number is prime
