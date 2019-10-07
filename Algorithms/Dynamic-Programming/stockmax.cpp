// https://www.hackerrank.com/challenges/stockmax/problem


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the stockmax function below.
long long int stockmax(vector<long long int> a) {
        long long int n=a.size(),p=0,c=0,i;
        long long int l[n];
        c=0;
        for(i=n-1;i>=0;i--)
        {
            c=max(c,a[i]);
            p+=c-a[i];
        }
        // cout<<n;
        return p;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string prices_temp_temp;
        getline(cin, prices_temp_temp);

        vector<string> prices_temp = split_string(prices_temp_temp);

        n=prices_temp.size();
        vector<long long int> prices(n);
        for (int i = 0; i < n; i++) {
            long long int prices_item = stoll(prices_temp[i]);
            prices[i] = prices_item;
        }

        long long int result = stockmax(prices);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
