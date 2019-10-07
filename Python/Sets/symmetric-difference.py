n = int(input())
a = set(map(int, input().split()))
m = int(input())
b = set(map(int, input().split()))
inx = a.intersection(b)
unx = a.union(b)
x = unx.difference(inx)
for i in sorted(x):
    print(i)