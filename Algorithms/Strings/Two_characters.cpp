#include <bits/stdc++.h>

using namespace std;

// Complete the twoCharaters function below.
int deleting(string s,char a,char b)
{
    int i,j,k;
    string ans;
    ans=s;
    for(i=0;i<ans.length();)
    {
        if(ans[i]!=a && ans[i]!=b)
        {
            ans.erase(ans.begin()+i);
        }
        else
            i++;
    }
    /// checking for validity
    for(i=0;i<ans.length()-1;i++)
    {
        if(ans[i]==ans[i+1])
        {
            return 0;
        }
    }
    return ans.length();
}



int twoCharaters(string s) {

    int i,j,freq[26]={0},y=0;
    char output[26];
    int count[10000],k,u=0,max;
    for(i=0;i<s.length();i++)
    {
        freq[s[i]-'a']=1;
    }
    for(i=0;i<26;i++)
    {
        if(freq[i]==1)
        {
            output[y]=i+'a';
            y++;
        }
    }
    for(i=0;i<y-1;i++)
    {
        for(j=i+1;j<y;j++)
        {
            k=deleting(s,output[i],output[j]);
            count[u]=k;
            u++;

        }
    }
    max=0;
    for(i=0;i<u;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
        }
    }
    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = twoCharaters(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
