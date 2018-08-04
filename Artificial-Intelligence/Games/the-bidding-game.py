#!/bin/python3
def calculate_bid(player,scotch_pos,first_moves,second_moves):
    """
    cf = 100 - sum(first_moves)
    cs = 100 - sum(second_moves)
    if (player == 1 and cf <6) or (player == 2 and cs < 6):
        if player == 1: return cf
        if player == 2: return cs
    if (player == 1 and cf <10) or (player == 2 and cs < 10):
        return 6
    if (player == 1 and cf <40) or (player == 2 and cs < 40):
        return 12
    """
    return 10
#gets the id of the player
player = int(input())

scotch_pos = int(input())         #current position of the scotch

first_moves = map(int, input().split())
second_moves = map(int, input().split())
bid = calculate_bid(player,scotch_pos,first_moves,second_moves)
print(bid)

