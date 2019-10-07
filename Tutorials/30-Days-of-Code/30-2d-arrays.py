#!/bin/python3

import math
import os
import random
import re
import sys

def find_max_sum(arr):
    mx, s = -80, 0
    # print(len(arr), arr)
    for i in range(4):
        for j in range(4):
            s = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1]+ arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
            if s > mx:
                mx = s
    return mx


if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
    print(find_max_sum(arr))
