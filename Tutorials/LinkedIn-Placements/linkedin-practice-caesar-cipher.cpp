#include <iostream>
using namespace std;

int main() {
    int n, k, i;
    char c,d;
    cin>>n;
    char s[n];
    cin>>s;
    cin>>k;
    for(i=0;i<n;i++) {
        c = s[i];
        if(c>='a' && c<='z')
            d = (s[i] - 97 + k)%26 + 97;
        else if(c>='A' && c<='Z')
            d = (s[i] - 65 + k)%26 + 65;
        else d = c;
        cout<<d;
    }
    return 0;
}
