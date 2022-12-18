cat contacts_hard.txt | grep -i "^nicolas" | grep -i "bauer" | grep -v -i "bomber" | grep "[0-9]\{3\}-[0-9]\{4\}" | awk '{ print $4 }'
