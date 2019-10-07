#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s, x;
    int count = 0, i, l;
    cin>>s;
    l = s.length();
    for(i=0; i<l; i+=3) {
        x = s.substr(i, 3);
        if(x[0] != 'S') count++;
        if(x[1] != 'O') count++;
        if(x[2] != 'S') count++;
    }
    cout<<count;
    return 0;
}
