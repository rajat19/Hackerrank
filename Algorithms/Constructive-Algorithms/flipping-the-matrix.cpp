#include <iostream>
using namespace std;

int main() {
    int ar[256][256];
    int q, i, j, n, sum, r, s, t, u, m1, m2;
    cin>>q;
    while(q!=0) {
        cin>>n;
        sum = 0;
        for(i=0; i<2*n; i++) {
            for(j=0; j<2*n; j++) cin>>ar[i][j];
        }
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                r = ar[i][j]; s = ar[i][2*n-j-1]; t = ar[2*n-i-1][j]; u = ar[2*n-i-1][2*n-j-1];
                m1 = (r>s)?r:s;
                m2 = (t>u)?t:u;
                m1 = (m1>m2)?m1:m2;
                sum += m1;
            }
        }
        cout<<sum<<endl;
        q--;
    }
    return 0;
}
