n, m = map(int, (input().strip().split(' ')))
arr = list(map(int, (input().strip().split(' '))))
A = set(list(map(int, (input().strip().split(' ')))))
B = set(list(map(int, (input().strip().split(' ')))))

H = 0

for i in arr:
    if i in A:
        H += 1
    if i in B:
        H -= 1

print(H)