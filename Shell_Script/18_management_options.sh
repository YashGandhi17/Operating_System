echo "Curent Directoty: "
pwd
echo "List Directory: "
ls
mkdir new_dir
echo "new directoty new_dir created"
cd new_dir/
echo "directoty changed to new_dir"
cp Emp1 Emp2
echo "File is copied"
mv Emp1 Emp10
echo "File renamed"
rm Emp3 
echo "file removed"
cat >> Emp3
echo "File Edited"


#Curent Directoty:
#/d/yash/Study/Sem-5/OS/Shell_Script
#List Directory:
#10_sum_n_integer.sh       5_leap_year.sh             leap_year.sh
#11_sum_is_even_odd.sh     6_sum_n_integers.sh        lines
#12_reverse.sh             7_prime.sh                 Max_num.sh
#mkdir: cannot create directory ‘new_dir’: File exists
#new directoty new_dir created
#directoty changed to new_dir
#cp: cannot stat 'Emp1': No such file or directory
#File is copied
#mv: cannot stat 'Emp1': No such file or directory
#File renamed
#file removed
#File Edited