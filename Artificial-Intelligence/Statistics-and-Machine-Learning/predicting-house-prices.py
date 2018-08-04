from sklearn import linear_model

clf = linear_model.LinearRegression()
F, N = map(int,input().split())
ls =[]
un =[]
for j in range(0,N):
    arr = input().split()
    ls.append([float(i) for i in arr])
t=int(input())
for i in range(0,t):    
    arr = input().split()
    un.append([float(i) for i in arr])
ppsqi=[]
for i in range(0,N):
    ppsqi.append(ls[i][-1])
    del ls[i][-1]
    

clf.fit(ls,ppsqi)
for i in clf.predict(un):
    print("%2.f" % i)
