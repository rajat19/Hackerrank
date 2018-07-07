#!/bin/python3

import sys

def migratoryBirds(n, ar):
    dc = {}
    for x in ar:
        if x in dc:
            dc[x] += 1
        else: dc[x] = 1
    return max(dc, key=dc.get)

n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = migratoryBirds(n, ar)
print(result)
