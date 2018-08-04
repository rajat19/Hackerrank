#!/bin/python
# AI to play a bejeweled like game.
# https://www.hackerrank.com/challenges/click-o-mania
# Head ends here
def nextMove(x, y, color, grid):
    z = 4
    if x > z:
        z = x
    if y > z:
        z = y
    z=z/2
    if z > color:
        z = color
    matrix = [[[0 for xx in xrange(z)] for xx in xrange(y)] for xx in xrange(x)]
    for cellx in range(x):
        for celly in range(y):
            matrix[cellx][celly][1] = cellScore(x, y, grid, cellx, celly, 0, matrix)
    for count in range(2,z):
        for cellx in range(x):
            for celly in range(y):
                matrix[cellx][celly][count] = cellScore(x, y, grid, cellx, celly, count-1, matrix)
    largest = 0
    for cellx in range(x):
        for celly in range(y):
            if matrix[cellx][celly] > largest and grid[cellx][celly] <> '-':
                targetx = cellx
                targety = celly
                largest = matrix[cellx][celly]
    if largest < 2:
        print "Done!"
    else:
        print "%s %s"%(targetx, targety)

def cellScore(x, y, grid, cellx, celly, z, matrix):
    color = grid[cellx][celly]
    if color == '-':
        return 0
    score = 0
    lowx = cellx-1
    highx = cellx+1
    lowy = celly-1
    highy = celly+1
    if lowx < 0:
        lowx = 0
    if highx >= x:
        highx = x-1
    if lowy < 0:
        lowy = 0
    if highy >= y:
        highy = y-1
    
    for checkx in range(lowx, highx):
        for checky in range(lowy, highy):
            if checkx == cellx and checky == celly:
                pass
            else:
                if grid[checkx][checky] == color:
                    if checkx == cellx or checky == celly:
                        score += 1 + matrix[checkx][checky][z]
    return score

# Tail starts here
if __name__ == "__main__":
    x,y,k = [ int(i) for i in raw_input().strip().split() ] 
    grid = [[i for i in str(raw_input().strip())] for _ in range(x)] 
    nextMove(x, y, k, grid)

