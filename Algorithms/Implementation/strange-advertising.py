n = int(input())
m = 5
l = (int)(m/2)
sums = l
for i in range(1, n):
    m = l*3
    l = (int)(m/2)
    sums += l
print (sums)
