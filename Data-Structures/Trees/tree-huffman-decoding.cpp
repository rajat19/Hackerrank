/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/
bool isLeaf(node* r) {
    if(r->left==NULL && r->right==NULL) return true;
    return false;
}
void decode_huff(node * root,string s) {
    node* t = root;
    int i;
    char x;
    int l = s.length();
    for(i=0; i<l; i++) {
        x = s[i];
        if(x=='0') t = t->left;
        else t = t->right;
        if(isLeaf(t)) {
            cout<<t->data;
            t = root;
        }
    }
}

