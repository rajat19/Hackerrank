#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countTriplets function below.
def countTriplets(arr, r):
    dc = {}
    for x in arr:
        if x in dc:
            dc[x] += 1
        else:
            dc[x] = 1
    na = list(set(arr))
    count = 0
    for i in range(1, len(na)):
        x = na[i]
        if x % r == 0:
            xbyr = x / r
            xintor = x * r
            if xbyr in dc and xintor in dc:
                # print('For %d => x %d xbyr %d xintor %d'%(x, dc[x], dc[xbyr], dc[xintor]))
                count += dc[xbyr]*dc[xintor]*dc[x]
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nr = input().rstrip().split()

    n = int(nr[0])

    r = int(nr[1])

    arr = list(map(int, input().rstrip().split()))

    ans = countTriplets(arr, r)

    fptr.write(str(ans) + '\n')

    fptr.close()
