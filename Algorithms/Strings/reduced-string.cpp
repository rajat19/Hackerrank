#include <iostream>
#include <cstring>
using namespace std;

bool good(string s, int l) {
    int flag = 0;
    for(int i=0; i<l-1; i++) {
        if(s[i] == s[i+1]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) return true;
    else return false;
}
int main() {
    string s, s1;
    cin>>s;
    int l = s.length(), i;
    while(!good(s, l)) {
        for(i=0; i<l-1; i++) {
            if(s[i] == s[i+1]) {
                s1 = s.substr(0,i) + s.substr(i+2, l);
                //cout<<s1<<endl;
                s = s1;
                l = s.length();
            }
        }
    }
    if(l>0) cout<<s<<endl;
    else cout<<"Empty String"<<endl;
    return 0;
}
