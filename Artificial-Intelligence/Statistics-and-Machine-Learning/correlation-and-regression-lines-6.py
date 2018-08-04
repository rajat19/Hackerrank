import math

x = [15, 12, 8, 8, 7, 7 , 7, 6, 5, 3]
y = [10, 25, 17, 11, 13, 17, 20, 13, 9, 15]
sx, sx2, sy, sy2, sxy = 0, 0, 0, 0, 0
n = len(x)
for a in x:
    sx += a
    sx2 += a*a
for b in y:
    sy += b
    sy2 += b*b
for i in range(n):
    sxy += x[i] * y[i]
r = (n*sxy - sx*sy) / (math.sqrt((n*sx2 - sx*sx) * (n*sy2 - sy*sy)))
print (r)
