#!/bin/python3

import sys

def solve(n, m):
    return ((n*m) - 1)

n, m = input().strip().split(' ')
n, m = [int(n), int(m)]
result = solve(n, m)
print(result)
