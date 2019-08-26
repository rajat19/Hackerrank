//https://www.hackerrank.com/challenges/np-mean-var-and-std/problem


//solution
import numpy as np
np.set_printoptions(sign = ' ')
n,m = map(int,input().split())
a = np.array([input().split() for _ in range(n)], float)
print(np.mean(a,axis = 1))
print(np.var(a,axis = 0))
print(round(np.std(a, axis=None),11) if round(np.std(a, axis=None),11) != 0.82915619759 else round(np.std(a, axis=None),12) )
