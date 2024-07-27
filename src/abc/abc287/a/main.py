import sys

n = int(sys.stdin.readline())


def count():
    agree = 0
    disagree = 0
    for _ in range(n):
        s = sys.stdin.readline().rstrip()
        agree += 1 if s == "For" else 0
        disagree += 1 if s == "Against" else 0
        if agree > n * 0.5:
            print("Yes")
            return
        elif disagree > n * 0.5:
            print("No")
            return

    print("No")


count()
