#include <bits/stdc++.h>

using namespace std;

bool compare(string a, string b) {
    if(a.length() < b.length()) return true;
    if(a.length() > b.length()) return false;
    for(int i=0; i<a.length(); i++) {
        if(a[i] < b[i]) return true;
        if(a[i] > b[i]) return false;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    sort(unsorted.begin(), unsorted.end(), compare);
    for(int i=0; i<n; i++) {
        cout<<unsorted[i]<<endl;
    }
    return 0;
}
