import sys

n = int(sys.stdin.readline().rstrip())

compatibles = [True, True, True, True]

a = []

for i in range(n):
    a.append(list(map(str, sys.stdin.readline().rstrip().split())))

for i in range(n):
    bi = list(map(str, sys.stdin.readline().rstrip().split()))
    for j in range(n):
        if compatibles[0] and a[i][j] == '1':
            if bi[j] != '1':
                compatibles[0] = False
        if compatibles[1] and a[j][n-i-1] == '1':
            if bi[j] != '1':
                compatibles[1] = False
        if compatibles[2] and a [n-i-1][n-j-1] == '1':
            if bi[j] != '1':
                compatibles[2] = False
        if compatibles[3] and a[n-j-1][i] == '1':
            if bi[j] != '1':
                compatibles[3] = False

print('Yes' if True in set(compatibles) else 'No')
