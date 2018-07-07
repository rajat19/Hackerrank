#!/bin/python3

import sys

def pickingNumbers(a):
    dc = {}
    for x in a:
        if x in dc:
            dc[x] += 1
        else: dc[x] = 1
    mx = -1
    # print (dc)
    for x in dc:
        if x-1 in dc and mx < dc[x] + dc[x-1]:
            mx = dc[x] + dc[x-1]
        if x+1 in dc and mx < dc[x] + dc[x+1]:
            mx = dc[x] + dc[x+1]
        if mx < dc[x]:
            mx = dc[x]
    return mx
if __name__ == "__main__":
    n = int(input().strip())
    a = list(map(int, input().strip().split(' ')))
    result = pickingNumbers(a)
    print(result)
