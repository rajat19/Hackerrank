""" Node is defined as
class node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
"""

allNodes = []
def isBST(p, mn, mx):
    if p is None: return True
    if p.data in allNodes: return False
    allNodes.append(p.data)
    if p.data < mn or p.data > mx: return False
    return (isBST(p.left, mn, p.data -1) and isBST(p.right, p.data+1, mx))
def checkBST(root):
    mx = 4294967296
    mn = -4294967296
    return isBST(root, mn, mx)