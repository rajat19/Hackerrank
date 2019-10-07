def minion_game(string):
    con, vow, l = "bcdfghjklmnpqrstvwxyz", "euioa", len(string)
    p1, p2 = {"name": "Stuart", "score": 0}, {"name": "Kevin", "score": 0}
    for i, char in enumerate(string.lower()):
        if char in con:
            p1["score"] += l - i
        elif char in vow:
            p2["score"] += l-i
            
    if p1["score"] == p2["score"]: print("Draw")
    else:
        winner = p1 if p1["score"] > p2["score"] else p2
        print("{} {}".format(winner["name"], winner["score"]))