/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void preord(node * root) {
    if(!root) return;
    cout<<root->data<<" ";
    preord(root->right);
}
void posord(node * root) {
    if(!root) return;
    posord(root->left);
    cout<<root->data<<" ";
}
void top_view(node * root) {
    posord(root);
    preord(root->right);
}

