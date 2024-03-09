import math
import sys
def LI(): return map(int, sys.stdin.readline().rstrip().split())

x, y = LI()
gcd = math.gcd(y-x, x-2015)

smaller_divisors = []
larger_divisors = []
i = 1
while i*i <= gcd:

    if gcd % i == 0:
        smaller_divisors.append(str(i))
        if i != gcd//i:
            larger_divisors.insert(0, str(gcd//i))
           
        
    i = i+1

print('\n'.join(smaller_divisors + larger_divisors))
