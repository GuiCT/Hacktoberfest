# Author : Ashish Gupta
# Roll No. : 11900119087

read -p "Enter a number : " num

a=1
b=1

echo "First $num fibonacci numbers :"
for ((i=0; i<num; i++));
do
    printf "$a "
    f=$((a+b))
    a=$b
    b=$f
done

printf "\n"