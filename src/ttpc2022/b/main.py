import itertools
import sys

def LI(): return list(map(int, sys.stdin.readline().rstrip().split()))

N, X = LI()
A = LI()

def convert(n):
    l = list(str(n))
    return list(itertools.permutations(l))

item_nums = []

def buy(restMoney, start, count):
    for i in range(start, N):
        budgetVariety = convert(restMoney)
        for j in range(budgetVariety.__len__()):
            budget = int(''.join(budgetVariety[j]))
            if (budget - A[i] >= 0 & i < N):
                buy(budget-A[i], i+1, count+1)
            elif (budget - A[i] >= 0 & i >= N):
                count += 1
                item_nums.append(count)
        if(count >= N-start):
          item_nums.append(count)
          break

    item_nums.append(count)

    return 

buy(X, 0, 0)
print(sorted(item_nums, key=int, reverse=True)[0])

