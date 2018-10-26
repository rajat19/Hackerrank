#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string s) {
    // Return the minimum number of characters to make the password strong

    int i,j,countcap=0,countsma=0,countspe=0,countdig=0,min=0;
    for(i=0;i<n;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            countcap++;
        }
        else if(s[i]>= 97 && s[i]<=122)
        {
            countsma++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            countdig++;
        }
        else
            countspe++;
    }
    if(countcap==0)
    {
        min++;
    }
    if(countsma==0)
    {
        min++;
    }
    if(countdig==0)
    {
        min++;
    }
    if(countspe==0)
    {
        min++;
    }
    if(n<6)
    {
        if(min+n<6)
        {
            return (min + (6-(n+min)));
        }
        else
            return min;
    }
    else
        return min;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
