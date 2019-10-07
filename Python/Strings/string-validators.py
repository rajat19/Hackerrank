if __name__ == '__main__':
    s = input()
    an = 0
    al = 0
    di = 0
    lo = 0
    up = 0
    for x in s:
        if(x.isalnum()): an = an + 1
        if(x.isalpha()): al = al + 1
        if(x.isdigit()): di = di + 1
        if(x.islower()): lo = lo + 1
        if(x.isupper()): up = up + 1
    if(an>0): print(True)
    else: print(False)
    if(al>0): print(True)
    else: print(False)
    if(di>0): print(True)
    else: print(False)
    if(lo>0): print(True)
    else: print(False)
    if(up>0): print(True)
    else: print(False)
