#hacker rank question link: https://www.hackerrank.com/challenges/pylons/problem

#!/bin/python3

import math
import os
import random
import re
import sys


def pylons(k, arr):
    
    count = j = 0
    location = j +k -1
    while j < n:
        if arr[location] == 1:
            j = location + k
            location = j + k - 1
            count += 1
            if location >= n:
                location = n-1
        else:
            location -= 1
            if location < j - k + 1 or location < 0:
                return -1
    return count  
                          

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    result = pylons(k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
