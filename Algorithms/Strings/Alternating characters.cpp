#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {

    int i,n;
    n=s.length();
    string ans;
    ans=s;
    for(i=0;i<ans.length();)
    {
        if(ans[i]==ans[i+1])
        {
            ans.erase(ans.begin()+i+1);
        }
        else
            i++;
    }
    return n-ans.length();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

