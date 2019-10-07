#!/bin/python3

import math
import os
import random
import re
import sys

def get_binary(n):
    a = []
    while n > 0:
        d = n % 2
        a.append(d)
        n //= 2
    lo, mx = 0, 0
    # print(a)
    for i in range(len(a)):
        if a[i] == 0:
            if lo > mx:
                mx = lo
            lo = 0
        else:
            lo+=1
    if lo > mx:
        mx = lo
    return mx

if __name__ == '__main__':
    n = int(input())
    print(get_binary(n))
