cat /etc/passwd | egrep -v '^#' | awk 'NR%2==0' | cut -f 1 -d ':' | rev | sort -r | awk -v n1=$FT_LINE1 -v n2=$FT_LINE2 'NR>=n1&&NR<=n2' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' | tr -d '\n'
