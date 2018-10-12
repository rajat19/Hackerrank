#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    v.push_back(pair<int,int> (0,0) );
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(pair<int,int> (x+y,0));
    }
    vector<int> w(n);
    for(int i=0;i<n;i++){
        w[i]=v[i+1].first;
    }
    sort(w.begin(),w.end());
    for(int i=0;i<n;i++){
        int x=w[i];
        for(int i=1;i<=n;i++){
            if(x==v[i].first && v[i].second==0 ){
                cout<<i<<' ';
                v[i].second=1;
            }
        }
    }
return 0;
}

