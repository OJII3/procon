array=($(find . -path '*.in'))

g++ main.cpp

for i in ${array[@]}
do
    cat $i
    echo '>>'
    ./a.out < $i
    echo ''
done
