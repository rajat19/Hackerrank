"""
3
0.32,0.32,0.12,0.04,0.07,0.13
3,7
32,62 42,68 12,98
95,13 97,25 93,37 79,27 75,19 49,47 67,17
0.39,0.05,0.14,0.05,0.12,0.25
5,8
32,62 44,66 22,58 34,60 2,90
85,7 63,31 87,13 75,11 89,33 57,5 71,15 55,25
0.54,0.02,0.02,0.01,0.3,0.11
4,9
8,52 6,80 26,42 2,72
51,19 39,11 37,29 81,3 59,5 79,23 53,7 43,33 77,21
"""
import random
def roledice(prob):
    proba = [(int)(i*100) for i in prob]
    newlist = []
    for i in range(6):
        newlist += [i+1] * proba[i]
    return random.choice(newlist)

def playgame(prob, snake_start, snake_end, ladder_start, ladder_end):
    current = 1
    rolls = 0
    count = [0, 0, 0, 0, 0, 0]
    while current != 100:
        dice = roledice(prob)
        count[dice-1] += 1
        current += dice
        if current in snake_start:
            index = snake_start.index(current)
            current = snake_end[index]
        if current in ladder_start:
            index = ladder_start.index(current)
            current = ladder_end[index]
        if current > 100:
            current -= dice
        rolls += 1
    return rolls

n = (int)(input())
for _ in range(n):
    prob = list(map(float, input().split(',')))
    no_ladders, no_snakes = list(map(int, input().split(',')))
    sna = list(input().split(' '))
    snake_start, snake_end = [], []
    for i in range(len(sna)):
        x, y = list(map(int, sna[i].split(',')))
        snake_start.append(x)
        snake_end.append(y)

    lad = list(input().split(' '))
    ladder_start, ladder_end = [], []
    for i in range(len(lad)):
        x, y = list(map(int, lad[i].split(',')))
        ladder_start.append(x)
        ladder_end.append(y)

    output = 0
    for i in range(500):
        output += playgame(prob, snake_start, snake_end, ladder_start, ladder_end)
    print((int)(output/500))

