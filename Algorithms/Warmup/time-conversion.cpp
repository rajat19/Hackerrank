#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int t, h1, h2, h, len;;
    string s; char ap;
    cin>>s;
    len = s.length();
    ap = s[len-2];
    h1 = (int)(s[0] - 48);
    h2 = (int)(s[1] - 48);
    h = h1*10 + h2;
    if(ap == 'P') {
        if(h==12) cout<<"12";
        else cout<<(12 + h);
    }
    else if(ap == 'A') {
        if(h==12) cout<<"00";
        else cout<<h1<<h2;
    }
    cout<<s.substr(2, 6)<<endl;
    return 0;
}
