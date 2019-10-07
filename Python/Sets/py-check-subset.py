for i in range(int(input())): #More than 4 lines will result in 0 score. Blank lines won't be counted. 
    n = int(input()); a = set(input().split()) 
    m = int(input()); b = set(input().split())
    #print(a.difference(a.intersection(b)))
    print (True if a.difference(a.intersection(b)) == set() else False)
