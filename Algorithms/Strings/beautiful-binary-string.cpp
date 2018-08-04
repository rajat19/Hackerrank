#include <iostream>
#include <cstring>
using namespace std;

bool beauty(string s, int l) {
    int flag = 0;
    for(int i=0; i<l-2; i++) {
        if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') {
            flag = 1;
            break;
        }
    }
    if(flag == 0) return true;
    else return false;
}
int main() {
    int l, i, count = 0; string s, s1;
    cin>>l>>s;
    while(!beauty(s, l)) {
        for(i=0; i<l-2; i++) {
            if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') {
                s1 = s.substr(0, i+2) + '1' + s.substr(i+3, l);
                s = s1;
                l = s.length();
                count++;
            }            
        }
    }
    cout<<count;
    return 0;
}

