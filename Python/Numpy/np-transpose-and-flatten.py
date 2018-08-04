import numpy as np
n, m = map(int, input().split(' '))
lst = []
for i in range(0, n):
    x = list(map(int, input().split(' ')))
    lst.append(x)
arr = np.array(lst)
print (np.transpose(arr))
print (arr.flatten())
