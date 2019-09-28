echo "Enter a number"
read a
f=1
for((i=1 ; i <= $a  ; i++))
do	
	f=$((i*f))	
done 
echo "Factorial of " $a " is " $f

#Enter a number
#8
#Factorial of  8  is  40320

