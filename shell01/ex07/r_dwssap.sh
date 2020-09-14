cat /etc/passwd | sed -e '/#/d' | awk 'NR%2' | cut -d : -f 1 | rev | sort -r
