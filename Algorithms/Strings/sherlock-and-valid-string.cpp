#include <bits/stdc++.h>

using namespace std;

string isValid(string s)
{
    int a[26]={0},i,k=0,d=0,d1=0,d2=0,d3=0;
    for(i=0;s[i];i++)
    {
        a[s[i]-'a']++;
        if(k<a[s[i]-'a'])
            k=a[s[i]-'a'];
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0) 
            continue;
            
        if(a[i]==k)
            d1++;
        else if(a[i]==k-1)
            d2++;
        else 
            d3++;

    }
    if(d1<d2) 
        d=d3+d1;
    else 
        d= d2+d3;

    if(d>1 ) 
        return "NO";
    return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}
