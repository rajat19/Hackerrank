t = int(input())
for _ in range(t):
    fib = [1,1]
    n = int(input())
    if n == 1:
        print('IsFibo')
    else:
        while n > fib[1]:
            fib.insert(2, fib[0] + fib[1])
            fib.remove(fib[0])
        if fib[1] == n:
            print('IsFibo')
        else:
            print('IsNotFibo')