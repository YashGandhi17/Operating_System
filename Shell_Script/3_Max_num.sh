max=0
total=0
avg=0
c=0
for i in $*
do
	if [ $i -gt $max ]
	then
		
		max=$i
		
	fi
	total=$((total+i))
	c=$((c+1))
	
done
avg=$((total/c))
echo "Max is "$max
echo "total is "$total
echo "average is "$avg

#Max is 4
#total is 9
#average is 3

