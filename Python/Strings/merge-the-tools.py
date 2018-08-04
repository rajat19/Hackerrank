def merge_the_tools(string, n):
    out = [list(string)[k:k+n] for k in range(0,len(list(string)),n)]
    for x in out:
        print(''.join(sorted(set(x), key=x.index)))
