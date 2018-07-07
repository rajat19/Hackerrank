#!/bin/python3

import sys

def isLeap(year):
    if year < 1918 and year%4 == 0:
        return True
    if year > 1918 and (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)):
        return True
    return False

def solve(year):
    if year == 1918:
        return '26.09.1918'
    if isLeap(year):
        return '12.09.%d'%(year)
    return '13.09.%d'%(year)
year = int(input().strip())
result = solve(year)
print(result)
