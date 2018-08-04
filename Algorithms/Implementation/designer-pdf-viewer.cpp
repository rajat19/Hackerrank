#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int h[26], i, l;
    string s;
    for(i=0; i<26; i++) cin>>h[i];
    cin>>s;
    l = s.length();
    int x[l];
    for(i=0; i<l; i++) x[i] = h[(int)s[i] - 97];
    sort(x, x+l);
    int ans = l * x[l-1];
    cout<<ans;
    return 0;
}

