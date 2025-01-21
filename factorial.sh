echo Enter the value of n
read n
fact=1
for((i=1;i<=n;i++))
do
  fact=$(($fact*$i))
done
echo Factorial is:$fact  
