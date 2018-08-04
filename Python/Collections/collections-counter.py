from collections import Counter
x = int(input())
shoes = list(map(int, input().split(' ')))
n = int(input())
cnt = Counter()
for i in shoes:
    cnt[i]+=1
cost = 0
for i in range(n):
    s, c = list(map(int, input().split(' ')))
    if cnt[s] > 0:
        cost += c
        cnt[s]-=1
print(cost)
