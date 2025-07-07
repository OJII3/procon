import sys

n = int(sys.stdin.readline().rstrip())
q = int(sys.stdin.readline().rstrip())

box = [[] for i in range(n)]
card = [[] for i in range(n)]

for i in range(n):
    qi = list(map(str, sys.stdin.readline().rstrip().split()))
    print(qi)
    if qi[0] == '1':
        box[int(qi[2])-1].append(str(i))
        card[i-1].append(qi[2])
    elif qi[0] == '2':
        print(' '.join(sorted(box[int(qi[1])-1], key=int)))
    elif qi[0] == '3':
        print(' '.join(sorted(card[int(qi[1])-1], key=int)))

