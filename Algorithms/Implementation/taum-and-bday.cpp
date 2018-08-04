#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long t, x, y, z, b, w, c;
    cin>>t;
    while(t--) {
        c = 0;
        cin>>b>>w>>x>>y>>z;
        if((x+z)<y) {
            c = b*x + w*(x+z);
        }
        else if(x>(y+z)) {
            c = b*(y+z) + w*y;
        }
        else {
            c = b*x + w*y;
        }
        cout<<c<<endl;
    }
    return 0;
}

