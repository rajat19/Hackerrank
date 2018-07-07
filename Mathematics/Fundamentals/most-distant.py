import math
def cd(x, y):
    return math.sqrt(x*x + y*y)

t = (int)(input())
a, b = input().split()
a, b = (int)(a), (int)(b)
minx, miny, maxx, maxy, dist = a, b, a, b, 0
for _ in range(t-1):
    a, b = input().split()
    a, b = (int)(a), (int)(b)
    if a < minx: minx = a
    if a > maxx: maxx = a
    if b < miny: miny = b
    if b > maxy: maxy = b
    if maxx-minx >= maxy-miny:
        dist = maxx - minx
    else: dist = maxy - miny
    
d1, d2, d3, d4 = cd(minx, miny), cd(minx, maxy), cd(maxx, miny), cd(maxx, maxy)
dx = max([d1, d2, d3, d4])
if dist < dx:
    dist = dx

print ("%.6f"%dist)