import sys

n = str(sys.stdin.readline().rstrip())

nums = list(n)
  
out = 0
for num in nums:
  out += int(num)

print(out)


