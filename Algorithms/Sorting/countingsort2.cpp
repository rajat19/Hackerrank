#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int n, i, j, *a, *b;
    cin>>n;
    a = (int*) malloc(n*sizeof(int));
    b = (int*) malloc(n*sizeof(int));
    memset(b, 0, n*sizeof(int));
    for(i=0; i<n; i++) {
       cin>>a[i];
       b[a[i]]++;
    }
    for(i=0; i<n; i++) {
//        cout<<b[i]<<" ";
        for(j=0; j<b[i]; j++) {
            cout<<i<<" ";
        }
    }
    return 0;
}
