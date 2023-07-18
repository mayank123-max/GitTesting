def solve(n):
    for i in range(n):
        for j in range(i):
            print(" ", end="")
        for k in range(i+1):
            print(k+1, end="")
        sp = (n-i-1)+(n-i-2)
        for l in range(sp):
            print(" ", end="")
        for m in range(i+1):
            print(k+1, end="")
        for o in range(i):
            print(" ", end="")

n = int(input())
solve(n)

zcvnxvxfvnfv