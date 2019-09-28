read user
w=`whoami`
if [ $user == $w ]
then
    echo "User is logged in "
else
    echo "User is not logged in"
fi

#bash 13_user_login_or_not.sh
#student
#User is logged in
