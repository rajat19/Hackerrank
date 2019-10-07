#!/bin/python

import sys
for fluff in range(input()):
    value = int(raw_input())
    print len([i for i in map(int, list(str(value))) if i != 0 and value % i == 0])