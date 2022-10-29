//Question link: https://www.hackerrank.com/challenges/construct-the-array/problem

#include <bits/stdc++.h>

using namespace std;
long mod = 1e9+7;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

long countArray(int n, int k, int x) {
    // Return the number of ways to fill in the array.
    long p[n] ,  d[n];
    p[0] = x == 1?1:0;
    d[0] = x == 1?0:1;
    for(int i =1; i<n ; i++){
        p[i] = d[i-1]%mod;
        d[i] = (p[i-1]*(k-1) + d[i-1]*(k-2))%mod;
    }
    
    return p[n-1];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    int x = stoi(first_multiple_input[2]);

    long answer = countArray(n, k, x);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
