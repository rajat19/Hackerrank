#!/bin/python3

import sys, math
def dx(n, m):
    return ((math.ceil(n/2))*(math.ceil(m/2)))

n,m = input().strip().split(' ')
n,m = [int(n),int(m)]
print(dx(n, m))

