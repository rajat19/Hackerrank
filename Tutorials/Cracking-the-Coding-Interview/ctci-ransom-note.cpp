#include <bits/stdc++.h>

using namespace std;
int main() {
    int m, n, i;
    bool found = true;
    string x;
    unordered_map<string, int> mag;
    cin>>m>>n;
    for(i=0; i<m; i++) {
        cin>>x;
        if(mag.find(x) != mag.end()) mag[x]+=1;
        else mag[x] = 1;
    }
    for(i=0; i<n; i++) {
        cin>>x;
        if(mag.find(x) == mag.end()) {
            found = false; break;
        }
        if (mag[x] <= 0) {
            found = false; break;
        }
        mag[x]-=1;
    }
    if (!found) cout<<"No";
    else cout<<"Yes";
    return 0;
}
