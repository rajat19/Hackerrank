/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/
node * newnode(int v) {
    node* t = (struct node*) malloc(sizeof(struct node));
    t->data = v;
    t->left = NULL;
    t->right = NULL;
    return t;
}
node * insert(node * root, int value) {
    if(!root) return newnode(value);
    if(value < root->data) root->left = insert(root->left, value);
    else root->right = insert(root->right, value);
    return root;
}

