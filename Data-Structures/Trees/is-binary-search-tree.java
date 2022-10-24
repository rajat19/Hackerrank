/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node class is defined as follows:
    class Node {
        int data;
        Node left;
        Node right;
     }
*/
boolean left(Node root, int pdata) {
    if (root == null) return true;
    if (root.data >= pdata) return false;
    return left(root.left, root.data) &&
        left(root.left, pdata) &&
        left(root.right, pdata) &&
        right(root.right, root.data);
}

boolean right(Node root, int pdata) {
    if (root == null) return true;
    if (root.data <= pdata) return false;
    return right(root.right, root.data) &&
        right(root.right, pdata) &&
        right(root.left, pdata) &&
        left(root.left, root.data);
}

boolean checkBST(Node root) {
	return left(root.left, root.data) &&
    	right(root.right, root.data);
}