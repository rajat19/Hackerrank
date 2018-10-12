#include <bits/stdc++.h>

using namespace std;

// Complete the gridChallenge function below.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char> > v;
        for(int i=0;i<n;i++){
            vector<char> row;
            for(int j=0;j<n;j++){
                char x;
                cin>>x;
                row.push_back(x);
            }
            sort(row.begin(),row.end());
            v.push_back(row);
        }
        int flag=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
               // cout<<v[j][i]<<' '<<v[j+1][i]<<endl;
                if(v[j][i]>v[j+1][i]){
                    flag=0;
                    i=n+1;
                    j=n+1;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

