n = int(input())
a = set(map(int, input().split()))
n = int(input())
for i in range(n):
    s, l = input().split()
    x = set(map(int, input().split()))
    if s == 'intersection_update':
        a.intersection_update(x)
    elif s == 'update':
        a.update(x)
    elif s == 'difference_update':
        a.difference_update(x)
    else:
        a.symmetric_difference_update(x)
print(sum(a))
