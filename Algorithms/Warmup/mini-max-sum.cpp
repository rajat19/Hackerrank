#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ll arr[5];
    int i;
    for(i=0; i<5; i++) cin>>arr[i];
    sort(arr, arr + 5);
    ll s = 0;
    for(i=0; i<4; i++) s+=arr[i];
    cout<<s<<" ";
    s = 0;
    for(i=1; i<5; i++) s+=arr[i];
    cout<<s;
    return 0;
}

