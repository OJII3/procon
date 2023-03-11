array=($(find . -path '*.in'))

for i in ${array[@]}
do
    cat $i
    echo '>>'
    pypy3 main.py < $i
    echo ''
done
