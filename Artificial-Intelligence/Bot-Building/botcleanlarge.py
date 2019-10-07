#!/bin/python
# Head ends here
class Node:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def dist_to(self, target):
        return abs(target.x - self.x) + abs(target.y - self.y)

def next_move(posx, posy, dimx, dimy, board):
    # the x co-ordinate increases from top to bottom
    # and y co-ordinate increases left to right.
    bot_node = Node(posx, posy)

    dirty_nodes = []
    for x in range(len(board)):
        for y in range(len(board[x])):
            if board[x][y] == "d":
                dirty_nodes.append(Node(x, y))

    # find the nearest dirty node.
    nearest_node = None
    for node in dirty_nodes:
        if nearest_node is None or node.dist_to(bot_node) < nearest_node.dist_to(bot_node):
            nearest_node = node

    if nearest_node is not None:
        print_move(nearest_node.x - bot_node.x, nearest_node.y - bot_node.y)

def print_move(delta_x, delta_y):
    if delta_x < 0 :
        print "UP"
    elif delta_x > 0 :
        print "DOWN"
    elif delta_y < 0 :
        print "LEFT"
    elif delta_y > 0 :
        print "RIGHT"
    else:
        print "CLEAN"

# Tail starts here
if __name__ == "__main__":
    pos = [int(i) for i in raw_input().strip().split()]
    dim = [int(i) for i in raw_input().strip().split()]
    board = [[j for j in raw_input().strip()] for i in range(dim[0])]
    next_move(pos[0], pos[1], dim[0], dim[1], board)