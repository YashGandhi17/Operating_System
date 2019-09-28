echo "Enter choice"
echo "1 Addition"
echo "2 Subtraction"
echo "3 Multiplication"
echo "4 Division"
read ch

case $ch in
  1)
  echo "Enter two numbers to add"
  read x
  read y
  result=$((x+y))
  ;;
  2)
  echo "Enter two numbers to subtract"
  read x
  read y
  result=$((x-y))
  ;;
  3)
  echo "Enter two numbers to Multiply"
  read x
  read y
  result=$((x*y))
  ;;
  4)
  echo "Enter two numbers to Divide"
  read x
  read y
  result=$((x/y))
  ;;
esac
echo Result = $result

#Enter choice
#1 Addition
#2 Subtraction
#3 Multiplication
#4 Division
#2
#Enter two numbers to subtract
#6
#4
#Result = 2
