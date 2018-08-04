#include <bits/stdc++.h>

using namespace std;
int main() {
    int t, i, l;
    bool foundsomething;
    string s1, s2;
    unordered_set<char> uset;
    cin>>t;
    while(t--) {
        foundsomething = false;
        cin>>s1>>s2;
        l = s1.length();
        for(i=0; i<l; i++) {
            uset.insert(s1[i]);
        }
        l = s2.length();
        for(i=0; i<l; i++) {
            if(uset.find(s2[i]) != uset.end()) {
                foundsomething = true;
                break;
            }
        }
        if (foundsomething) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        uset.clear();
    }
    return 0;
}