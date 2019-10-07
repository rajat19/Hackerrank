#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i, l, c;
    string s;
    cin>>n;
    while(n--) {
        c = 0;
        cin>>s;
        l = s.length();
        for(i=0; i<l/2; i++) {
            if(s[i] > s[l-i-1]) {
                c += (int)(s[i]) - (int)(s[l-i-1]);
            }
            else c += (int)(s[l-i-1]) - (int)(s[i]);
        }
        cout<<c<<endl;
    }
    return 0;
}
