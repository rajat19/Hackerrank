/*
    LOGIC:
        This is equivalent to take away the chocolates of one coworker by 1, 2 or 5 while keeping others' chocolate untouched.

        To minimize the number of operations, we should try to make the number of chocolates
        of every coworker equal to the minimum one in the group.
        or it could to minimum to certain value which cannot be less than (minimum value of this group - 5);
*/

#include <bits/stdc++.h>
using namespace std;

int equal(vector<int> arr) {

    int n=arr.size();
    int m = *min_element(arr.begin(), arr.end());
    int r = INT_MAX;

    for(int t = m; t >= m-4 ; t--) 
    {
        int s = 0;
        for(int i = 0; i < n; i++) 
        {
            int D = arr[i] - t;
            s += D / 5, D %= 5;
            s += D / 2, D %= 2;
            s += D;
        }
        r = min(r, s);
    }
    return r;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<equal(a)<<endl;
    }
    return 0;
}

