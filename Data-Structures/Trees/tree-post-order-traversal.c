/*
Node is defined as below and

Post-order traversal function is as shown


struct node
{
    int data;
    struct node* left,*right;
};


*/


void postorder(struct node* root)
{
    if(root==NULL)
        return;

    inorder(root->left);
    inorder(root->right);
    printf("%d ",root->data);
}
