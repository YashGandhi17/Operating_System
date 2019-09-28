cal

cal 2019

date +%d/%m/%y-%T

hour=$(date +%H)

if [ $hour -lt 12 ]
then
    echo "Good Morning"
elif [ $hour -lt 16 ]
then
    echo "Good Afternoon"
else
    echo "Good Evening"
fi

whoami
echo $HOME

#19/09/19-20:07:00
#Good Evening
#yashr
#/c/Users/yashr

