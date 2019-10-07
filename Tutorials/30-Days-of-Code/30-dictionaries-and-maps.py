# Enter your code here. Read input from STDIN. Print output to STDOUT

if __name__ == "__main__":
    n = int(input())
    d = {}
    for i in range(n):
        x, y = list(input().split(' '))
        d[x] = y
    while True:
        try:
            s = input()
            if s in d:
                print("{}={}".format(s, d[s]))
            else:
                print("Not found")
        except EOFError:
            break
