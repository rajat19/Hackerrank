#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int> m;
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int temp;
            string s;
            cin>>s>>temp;
            map<string,int>::iterator itr = m.find(s);
            if(itr==m.end())
                m.insert(make_pair(s,temp));
            else
                m[s]+=temp;
        }
        else if(type==2){
            string s;
            cin>>s;
            m[s]=0;
        }
        else{
            string s;
            cin>>s;
            map<string,int>::iterator itr = m.find(s);
            if(itr!=m.end())
                cout<<itr->second<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}

