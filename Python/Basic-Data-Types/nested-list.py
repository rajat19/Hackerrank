l = []
if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        l.append([score, name])
    l.sort()
    mn = l[0][0]
    flag = 0
    d = -1
    for x in l:
        if(flag==1 and x[0]==d):
            print(x[1])   
        elif(flag==0 and x[0]>mn):
            flag = 1
            d = x[0]
            print(x[1])
        elif(flag==1): break
                
                
                
