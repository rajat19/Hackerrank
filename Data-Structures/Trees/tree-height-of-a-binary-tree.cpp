
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
    if(root == NULL) return -1;
    else {
        int l = height(root->left);
        int r = height(root->right);
        int h = (l>r)?l+1:r+1;
        return h;
    }
}
  
