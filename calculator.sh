i="y"
echo Enter value of a:
read a
echo Enter value of b:
read b
while [ "$i" = "y" ]; 
do
echo "Enter the OP:1 for add 2 for subtract 3 for multiplication 4 for division"
read OP
case $OP in
1)r=$(($a+$b))
echo $r;;
2)r=$(($a-$b))
echo $r;;
3)r=$(($a*$b))
echo $r;;
4)r=$(($a/$b))
echo $r;;
*)echo wrong choice;;
esac
echo Do u want to cont...
read i
if [ "$i" != "y" ]; then
exit
fi
done

