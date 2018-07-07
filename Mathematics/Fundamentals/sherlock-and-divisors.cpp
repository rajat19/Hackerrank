#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n, i, c, x;
    cin>>t;
    while(t--) {
        cin>>n;
        c = 0;
        for(i=1; i<=sqrt(n); i++) {
            if(n%i == 0 && i%2 == 0) c++;
            if(i*i!=n) {
                x = (int)(n/i);
                if(i*x == n && x%2 == 0) c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
