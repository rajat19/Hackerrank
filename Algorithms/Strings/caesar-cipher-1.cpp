#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int rot;
    char a;
    string s;
    cin >> rot;
    cin >> s;
    cin >> rot;
    for(auto &c: s){
        if(isalpha(c)){
            a = isupper(c)?'A':'a';
            c= a + (c - a + rot)%26;
        }
    }       
    cout << s << endl;
    
}

