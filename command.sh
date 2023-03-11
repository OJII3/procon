array=($(find . -path '*.in'))

for i in ${array[@]}
do
    cat $i
    echo '>>'
    pypy3 $(echo "$PWD")/main.py < $i
    echo ''
done
