count=0
array=()
for i in $*
do
   count=$((count+1))
   array+=($i)
done
if [ $count -gt 5 ]
    then
    echo "Invalid number of arguments"
    else
    for ((i=$count-1;i>=0;i--))
    do
        echo -n "${array[i]} "
    done
fi

#bash 12_reverse.sh 7 3 5 2 6
#6 2 5 3 7

#bash 12_reverse.sh 7 3 5 2 6 3
#Invalid number of arguments
