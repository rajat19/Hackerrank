if __name__ == '__main__':
    n = int(input())
    marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        marks[name] = scores
    query = input()
    tot = 0
    for i in marks[query]:
        tot = tot + i
    print(format(tot/3, '.2f'))