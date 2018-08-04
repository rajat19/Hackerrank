#!/bin/python3

import os
import sys
from collections import OrderedDict
#
# Complete the climbingLeaderboard function below.
#
def climbingLeaderboard(scores, alice):
    # scores = list(set(scores))
    scores = list(OrderedDict((x, True) for x in scores).keys())
    j = 0
    pos = []
    l = len(scores)
    # print(scores)
    for i in range(l):
        if scores[l-i-1] > alice[j]:
            pos.append(l - i + 1)
            j += 1
    for i in range(len(alice)-len(pos)):
        pos.append(1)
    return pos

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    scores_count = int(input())

    scores = list(map(int, input().rstrip().split()))

    alice_count = int(input())

    alice = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(scores, alice)

    fptr.write('
'.join(map(str, result)))
    fptr.write('
')

    fptr.close()

