L,S1,S2=[float(x) for x in input().split()]
n=int(input())
for _ in range(n):
    q=int(input())
    t=abs((((2*L**2)**.5)-((2*q)**.5))/(S2-S1))
    print(t)
