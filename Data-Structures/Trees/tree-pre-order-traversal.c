/*
Node is defined as below and

Pre-order traversal function is as shown


struct node
{
    int data;
    struct node* left,*right;
};


*/


void preorder(struct node* root)
{
    if(root==NULL)
        return;

    printf("%d ",root->data);
    inorder(root->left);
    inorder(root->right);
}
