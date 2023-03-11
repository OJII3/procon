n = int(input())
x = list(map(int, input().split()))

called = set()
uncalled = set(str(i) for i in range(1, n+1))

for i in range(1, n+1):
    if not i in called and str(x[i-1]) in uncalled:
        called.add(x[i-1])
        uncalled.remove(str(x[i-1]))
        
print(len(uncalled))
print(' '.join(uncalled))
