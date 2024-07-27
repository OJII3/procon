import sys

s = sys.stdin.readline().rstrip()
index = -1


for i in range(0, s.__len__()):
    try:
        if (s.index('a', i) >= 0):
            index = i+1
    except:
      break

print(index)