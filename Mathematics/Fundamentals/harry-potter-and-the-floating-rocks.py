t = (int)(input())
def gcd(a, b):
    if a < b:
        temp = a
        a = b
        b = temp
    if b == 0: return a
    return gcd(b, a%b)
for _ in range(t):
    x1, y1, x2, y2 = input().split(' ')
    x1, y1, x2 ,y2 = (int)(x1), (int)(y1), (int)(x2), (int)(y2)
    if y2 == y1 and x2 == x1: print(1)
    elif y2 == y1: print(abs(x2 - x1) - 1)
    elif x2 == x1: print(abs(y2 - y1) - 1)
    else:
        print(gcd(abs(x2 - x1), abs(y2 - y1)) - 1)
