def fib(a,b,n):
    if(n==1):
        return a
    elif(n==2):
        return b
    else:
        return fib(a,b,n-2)+fib(a,b,n-1)*fib(a,b,n-1)
    
r = input();
r = r.split(' ')
a = int(r[0])
b = int(r[1])
n = int(r[2])
print(fib(a,b,n))