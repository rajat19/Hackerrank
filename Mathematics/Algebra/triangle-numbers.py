t = int(input())
for _ in range(t):
    n = int(input())
    if n == 1 or n == 2: print (-1)
    elif n%2 == 1: print(2)
    elif n%4 == 0: print(3)
    else: print(4)
        