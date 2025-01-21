echo Enter the value of n
read n
num1=0
num2=1
for((i=1;i<=n;i++))
do
  echo $num1
  f=$(($num1+$num2))
 num1=$num2
 num2=$f
 done
 

