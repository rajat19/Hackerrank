a = set(map(int, input().split()))
def findans(a):
    n, c = int(input()), 0
    for i in range(n):
        b = set(map(int, input().split()))
        if a.difference(b) == set() or b.difference(a) != set():
            return False
        
    return True
print (findans(a))
