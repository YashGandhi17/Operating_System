echo "Enter a string"
read a
l=${#a}
c=0
for((i=0 ; i < l  ; i++))
do
	x=${a:l-i-1:1}
	ai=${a:i:1}
	echo $x $ai
	if [ $ai != $x ]
	then
		c=1	
	fi	
	

done 
if [ $c -eq 0 ] 	 
then
	echo "string is palindrom"
else
	echo "string is not palindrom"
fi 
