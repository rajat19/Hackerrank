#include <cstring>
#include <iostream>
using namespace std;

bool good(string a, string b) {
    int l = a.length(), flag = 0;
    for(int i=0; i<l-1; i++) {
        for(int j=i+1; j<l; j++) {
            if(a[i]!=a[j] && b[i]==b[j]) {
                flag = 1;
                break;
            }
            else if(a[i]==a[j] && b[i]!=b[j]) {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0) return true;
    return false;
}
int main() {
    int len, q, l, r, i, count, dif;
    string s, sub, s1;
    cin>>len>>q>>s;
    while(q!=0) {
        cin>>l>>r;
        if(l == r) cout<<len<<endl;
        else {
            count = 0;
            sub = s.substr(l-1, r);
            dif = r - l + 1;
            for(i=0; i<len - dif + 1; i++) {
                s1 = s.substr(i, dif);
                //cout<<s1<<" ";
                if(good(s1, sub)) count++;
            }
            cout<<count<<endl;
        }
        q--;
    }
    return 0;
}

