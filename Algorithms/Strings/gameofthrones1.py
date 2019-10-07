#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the gameOfThrones function below.
def gameOfThrones(s):
    s=list(s)
    s.sort()
    i=0
    p=0
    k=s[0]
    c=0
    while i<len(s):
        if s[i]==k:
            c+=1
            i+=1
        else:
            if (c%2)!=0:
                p+=1
            c=0
            k=s[i]
            continue
    if p>1:
        return"NO"
    else:
        return "YES"


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = gameOfThrones(s)

    fptr.write(result + '\n')

    fptr.close()
