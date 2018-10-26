#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
bool isvalid(int freq[])
{
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            count=freq[i];
            break;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0 && freq[i]!=count)
            return false;
    }
    return true;
}
string isValid(string s) {
    int freq[26]={0};
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }
    if(isvalid(freq))
        return "YES";
    else
    {
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            {
                freq[i]--;
                if(isvalid(freq))
                    return "YES";
                freq[i]++;
            }
        }
        return "NO";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
