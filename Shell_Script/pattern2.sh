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
		echo -n "* "
	done
	echo  
done 
for((i=x-1 ; i >= 1 ; i--))
do
	for((k=x  ; k>i ; k--))
	do
		echo -n " "
	done
	for((j=i ; j >=1  ; j--))
	do 
		echo -n "* "
	done
	echo  
done 

#Output:
#Enter a number
#5
#    *
#   * *
#  * * *
# * * * *
#* * * * *
# * * * *
#  * * *
#   * *
#    *
