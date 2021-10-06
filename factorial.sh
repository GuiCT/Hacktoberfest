# Author : Ashish Gupta
# Roll No. : 11900119087

echo "Enter a number : "
read num

n=$num
fact=1

while [ $num -gt 1 ]
do
    fact=$((num*fact))
    num=$((num-1))
done

echo "$n! = $fact"