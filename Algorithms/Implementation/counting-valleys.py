#!/bin/python3

import sys

def countingValleys(n, s):
    l, iv, c = 0, 0, 0
    for x in s:
        if x == 'D': l-= 1
        elif x == 'U': l += 1
        if iv == 0 and l < 0:
            iv = 1
        elif iv == 1 and l >= 0:
            iv = 0
            c += 1
        # print (iv, l)
    return c

if __name__ == "__main__":
    n = int(input().strip())
    s = input().strip()
    result = countingValleys(n, s)
    print(result)
