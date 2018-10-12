#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        int flag=1;
        for(int i=0;i<n;i++){
            if(a[i]+b[i]<k){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
