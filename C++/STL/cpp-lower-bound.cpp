#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(vector<int> arr,int n){
    if(n!=0 && arr[n]==arr[n-1]){
        return check(arr,n-1);
    }
    else
        return n;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int q;
    cin>>q;
    while(q--){
        int x,flag=-1,i,l=0,r=n-1;
        cin>>x;
        while (l <= r)
        {
            int m =(l+r)/2;
            if (arr[m] == x) 
                flag = m;  
            if (arr[m] < x) 
                l = m + 1; 
            else
                r = m - 1; 
        }
        if(flag>=0){
            flag=check(arr,flag);
            cout<<"Yes "<<flag+1<<endl;    
        }
        else{
            cout<<"No "<<l+1<<endl;
        }
    }
    return 0;
}

