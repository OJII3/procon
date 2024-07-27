import sys

n, m = map(int, sys.stdin.readline().rstrip().split())

s_list = []
t_list = []
count = 0

for i in range(n):
    s = sys.stdin.readline().rstrip()
    s_l = list(s)
    s_latter = "".join(s_l[3:])
    s_list.append(s_latter)

for j in range(m):
    t = sys.stdin.readline().rstrip()
    t_list.append(t)
    # for s in s_list:
    #     if s == t:
    #         count += 1
    #         s_list.remove(s)
    #         continue

for sl in s_list:
    for tl in t_list:
        if sl == tl:
            count += 1
            break

print(count)
