echo "Enter a number"
read x
for((i=1 ; i <= x ; i++))
do
	for((k=x  ; k>i ; k--))
	do
		echo -n " "
	done
	for((j=1 ; j <= i ; j++))
	do 
		echo -n $i
		echo -n " "
	done
	echo  
done 

#Output:
#Enter a number
#5
#    1
#   2 2
#  3 3 3
# 4 4 4 4
#5 5 5 5 5
