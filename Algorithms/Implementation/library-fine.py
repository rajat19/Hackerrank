#!/bin/python3

import sys
total = 0
d1,m1,y1 = input().strip().split(' ')
d1,m1,y1 = [int(d1),int(m1),int(y1)]
d2,m2,y2 = input().strip().split(' ')
d2,m2,y2 = [int(d2),int(m2),int(y2)]
if(y2<y1): 
    total = 10000
elif (y2==y1):
    if(m2<m1): 
        total = 500*(m1-m2)
    elif(m1==m2):
        if(d2<d1):
            total = 15*(d1-d2)
print (total)