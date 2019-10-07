n = int(input())
s = set(map(int, input().split()))
m = int(input())
for i in range(m):
    ar = list(input().strip().split(' '))
    if ar[0] == 'pop':
        s.pop()
    if ar[0] == 'remove':
        s.remove(int(ar[1]))
    if ar[0] == 'discard':
        s.discard(int(ar[1]))
        
print(sum(s))

