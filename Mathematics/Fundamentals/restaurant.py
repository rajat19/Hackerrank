from fractions import gcd
ans=[]
for i in range(int(input())):
      l,b=list(map(int,input().split()))
      ans.append((l*b)//gcd(l,b)**2)
for i in ans:print(i)
