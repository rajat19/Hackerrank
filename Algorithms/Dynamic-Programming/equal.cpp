#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i=0;i<n;i++) cin >> a[i];
        
        // giving x chocs to every colleague other than chosen one 
        // is the same as taking away x chocs from the chosen one
        int min=*min_element(a.begin(),a.end());
        int numops=0;
        
        // consider taking away 5 chocs first (nChocs)
        for (int i=0;i<n;i++) {
            int nChocs=floor((a[i]-min)/5.0);
            a[i]-=(5*floor((a[i]-min)/5.0));
            numops+=nChocs;
        }
        min=*min_element(a.begin(),a.end()); // min of leftovers in a[]
        
        // fine tuning for last calc, get freq of diff first
        vector <int> freq(5); // stores diff of 0 to 4
        for (int i=0;i<n;i++) freq[a[i]-min]++; 
        
        // case of min num of chocs is min
        int extra_numops=1*(freq[1]+freq[2])+2*(freq[3]+freq[4]);
        
        // case of min num of chocs is min-1
        int extra_numops1=1*(freq[0]+freq[1]+freq[4])+
                          2*(freq[2]+freq[3]);
        if (extra_numops1<extra_numops) extra_numops=extra_numops1;
        
        // case of min num of chocs is min-2
        int extra_numops2=1*(freq[0]+freq[3])+
                          2*(freq[1]+freq[2]+freq[4]);
        if (extra_numops2<extra_numops) extra_numops=extra_numops2;

        cout << numops+extra_numops << endl;
    }
    return 0;
}