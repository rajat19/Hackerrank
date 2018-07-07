#!/bin/python3

import sys

def hurdleRace(k, height):
    mx = max(height)
    if k > mx: return 0
    return (mx-k)

if __name__ == "__main__":
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    height = list(map(int, input().strip().split(' ')))
    result = hurdleRace(k, height)
    print(result)
