#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    int i, l, count = 1;
    cin>>s;
    l = s.length();
    for(i=0; i<l; i++) {
        if(s[i]>='A' && s[i]<='Z') count++;
    }
    cout<<count;
    return 0;
}
