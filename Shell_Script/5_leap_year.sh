echo "Enter a year"
read a
l=`expr $a % 4`
e=`expr $a % 100`
p=`expr $a % 400`
if [ $l -eq 0 ]
then
	if [ $e -eq 0 ] && [ $p -eq 0 ]
	then
		echo "year is leap year"
	else 
		echo "year is not leap year"
	fi
else
	echo "year is not leap year"
fi

#Enter a year
#1900
#year is not leap year
