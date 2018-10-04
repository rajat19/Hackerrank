#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long> scores(n);
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    long m;
    cin >> m;
    vector<long> alice(m);
    
    for(int i = 0;i < m;i++){
        cin >> alice[i];
    }
    
    int rank=1;    
    for(int j=1;j<n;j++){
        if(scores[j-1]==scores[j]){
                
        }
        else {
            rank++;
        }
    }
    rank++;
        
    int arank=rank;
    int k=n-1;
    
    for(int i=0;i<m;i++){

        for(int j=k;j>=0;j--){
            if(scores[j]>alice[i]){
                k=j;
                break;
            }
            else if(scores[j]==alice[i]){
                arank--;
                if(scores[j]==scores[j-1] && j>0){
                    arank++;
                    k=j;
                }
                else{
                    k=j-1;
                    break;
                }
                
            }
            else if(scores[j]<alice[i]){
                arank--;
                if(scores[j]==scores[j-1] && j>0){
                    arank++;
                }
            }
        }
        if(arank<=0){
            arank=1;
        }
        cout<<arank<<"\n";
    }
    
    return 0;
}
