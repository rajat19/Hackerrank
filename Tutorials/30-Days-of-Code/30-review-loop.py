# Enter your code here. Read input from STDIN. Print output to STDOUT
def printc(s):
    for i in range(0, len(s), 2):
        print(s[i], end='')
    print(" ", end='')
    for i in range(1, len(s), 2):
        print(s[i], end='')
    print()

if __name__ == "__main__":
    t = int(input())
    while t>0:
        s = input()
        printc(s)
        t-=1
