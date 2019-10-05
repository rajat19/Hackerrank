#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int t;
    cin>>t;
    while(t--){
        int type,val;
        cin>>type>>val;
        if(type==1){
            s.insert(val);
        }
        else if(type==2){
            s.erase(val);
        }
        else{
            set<int>::iterator itr=s.find(val);
            if(itr!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}

