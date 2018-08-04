if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    l = list(set(arr))
    l.sort()
    l.reverse()
    print(l[1])

