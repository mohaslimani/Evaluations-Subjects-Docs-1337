where_am_i=$(ifconfig | grep inet | grep broadcast | awk '{ print $2 }')
if [ $where_am_i = '' ]
then echo "Je suis perdu!" 
else echo $where_am_i
fi
