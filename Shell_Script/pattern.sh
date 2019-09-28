echo "Enter a number"
read x
for((i=1 ; i <= $x ; i++))
do
	for((j=1 ; j <= $i ; j++))
	do 
		echo -n "*"
	done
	echo  
done 

#Output:
#Enter a number
#5
#*
#**
#***
#****
#*****
