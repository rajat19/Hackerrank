#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {

    int i,freq[26]={0},freq2[26]={0};

    for(i=0;i<s1.length();i++)
    {
        freq[s1[i]-'a']++;
    }
    for(i=0;i<s2.length();i++)
    {
        freq2[s2[i]-'a']++;
    }
    int k=0;
    for(i=0;i<26;i++)
    {
        if(freq[i]!=freq2[i])
        {
            k+=abs(freq[i]-freq2[i]);
        }
    }
    return k;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
