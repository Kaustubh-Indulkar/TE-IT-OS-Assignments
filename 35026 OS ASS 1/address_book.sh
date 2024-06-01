clear

c=0

while test $c != 7
do

echo "1-> Create 2-> View 3-> Insert 4-> Delete 5-> Modify 6->Search 7->Exit"

read c

case "$c" in
"1") #create
echo "Enter the Filename: "
read file
touch $file
echo "File Created Sucessfully"
;;

"2")
cat "$file"
#write here code
;;

"3")
it=0
echo "enter the no. of records"
		read n
	while [ $it -lt $n ]
do
		echo "enter id:"
		read id1
		echo "enter name:"
		read nm
		pa="^[A-Za-z]"
		
	echo "enter address:"
	read add
	pa="^[A-Za-z0-9]"
	while [[ ! "$add" =~ $pa ]]
	do
	echo "enter valid address:"
	read add
done
#echo $add

echo "enter phone no.:"
read ph
pat="^[0-9]{10}$"
while [[ ! $ph =~ $pat ]]
do
	echo "please enter phone number as XXXXXXXXXX:"
	read ph
done
#echo $ph

echo "enter email:"
read em
patem="^[a-z0-9._%-+]+@[a-z]+\.[a-z]{2,4}$"
while [[ ! $em =~ $patem ]]
do
	echo "please enter valid email address"
	read em
done
#echo $em

echo "$id1,$nm,$add,$ph,$em" >> "$file"
it=`expr $it + 1`
echo "$it record entered"
done

;;

"4")
echo "enter the file name in which you want to delete"
read file

echo "enter id that you want to delete"
read id

sed -i "/$id/d" $file
echo "data successfully deleted"

#write here code
;;

"5")
#write here code
echo "enter the file name in which you want to modify"
read file

echo "enter word that you want to modify"
read word

echo "enter new word "
read new_word

sed -i_bkp -e "s/$word/$new_word/g" $file
;;

"6")
#write here code
echo "enter the file name in which you want to search"
read file

echo "enter id that you want to search"
read id

grep $id $file
;;

"7")
echo "Exit"
exit
;;
esac

done
exit
