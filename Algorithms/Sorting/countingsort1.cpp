#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, i, *ar, *b;
    cin>>n;
    ar = (int*) malloc(n*sizeof(int));
    b = (int*) malloc(n*sizeof(int));
    memset(b, 0, n*sizeof(int));
    for(i=0; i<n; i++) {
        cin>>ar[i];
        ++b[ar[i]];
    }
    for(i=0; i<100; i++) {
        cout<<b[i]<<" ";
    }
    return 0;
}
