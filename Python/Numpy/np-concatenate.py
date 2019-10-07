import numpy as np
n, m, p = map(int, input().split())
lst1 = []
for i in range(n):
    lst1.append(list(map(int, input().split())))
lst2 = []
for i in range(m):
    lst2.append(list(map(int, input().split())))
print(np.concatenate((np.array(lst1), np.array(lst2)), axis = 0))