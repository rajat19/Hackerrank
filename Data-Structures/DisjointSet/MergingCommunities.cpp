#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void initialize(vector<int> &A, vector<int> &size){
    for(int i=0;i<A.size();i++){
        A[i]=i;
        size[i]=1;
    }
}

int root(vector<int> &A, int i){
    while(A[i]!=i){
        A[i]=A[A[i]];
        i=A[i];
    }
    return i;
}

bool find(vector<int> &A, int a, int b){
    if(root(A,a) == root(A,b)){
        return true;
    }
    return false;
}

void set_union(vector<int> &A, vector<int> &size, int a, int b){
    int root_a=root(A,a);
    int root_b=root(A,b);
    
    if(size[root_a]<size[root_b]){
        A[root_a]=A[root_b];
        size[root_b]+=size[root_a];
    }
    else{
        A[root_b]=A[root_a];
        size[root_a]+=size[root_b];
    }
}

int main() {
    
    int n,q;
    cin>>n>>q;
    
    vector<int> A(n);
    vector<int> size(n);
    
    initialize(A,size);
    
    while(q--){
        char c;
        int i,j;
        cin>>c;
        
        if(c=='M'){
            cin>>i>>j;
            if(!find(A,i,j))
                set_union(A,size,i,j);
        }
        else if(c=='Q'){
            cin>>i;
            cout<<size[root(A,i)]<<endl;
        }
    }
    return 0;
}
