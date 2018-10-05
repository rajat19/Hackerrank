/*
Node is defined as below and

Inorder traversal function is as shown


struct node
{
    int data;
    struct node* left,*right;
};


*/


void inorder(struct node* root)
{
    if(root==NULL)
        return;

    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
