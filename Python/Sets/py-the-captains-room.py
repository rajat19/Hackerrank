N = int(raw_input())
alist = list(map(int, raw_input().split()))
aset  = set(alist)
print (sum(aset)*N-sum(alist))/(N-1)
