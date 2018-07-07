n, m = input().split()
n, m = int(n), int(m)
count = 0
while m > 0:
    a, b, k = input().split()
    a, b, k = int(a), int(b), int(k)
    count += k * (b - a + 1)
    m -= 1
    
print(count//n)