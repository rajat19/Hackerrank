#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void initialize(vector<long> &A, vector<long> &size){
    for(long i=0;i<A.size();i++){
        A[i]=i;
        size[i]=1;
    }
}

int root(vector<long> &A, long i){
    while(A[i]!=i){
        A[i]=A[A[i]];
        i=A[i];
    }
    return i;
}

bool find(vector<long> &A, long a, long b){
    if(root(A,a) == root(A,b)){
        return true;
    }
    return false;
}

void set_union(vector<long> &A, vector<long> &size, long a, long b){
    int root_a=root(A,a);
    int root_b=root(A,b);
    if(root_a==root_b) return;
    
    if(size[root_a]<size[root_b]){
        A[root_a]=A[root_b];
        size[root_b]+=size[root_a];
    }
    else{
        A[root_b]=A[root_a];
        size[root_a]+=size[root_b];
    }
}

// Complete the journeyToMoon function below.
long long journeyToMoon(long n, vector<vector<int>> astronaut) {
    vector<long> A(n);
    vector<long> size(n);
    initialize(A, size);
    
    for(int i=0;i<astronaut.size();i++){
        set_union(A, size, astronaut[i][0], astronaut[i][1]);
    }

    vector<long> k;
    for(long i=0;i<size.size();i++){
        if(A[i]==i){
            k.push_back(size[i]);
        }
    }
    sort(k.rbegin(), k.rend());
    
    // for(auto i:k){
    //     cout<< i<<" ";
    // }
    // cout<<endl;

    vector<long> k1(k.size());
    for(long i=k.size()-1;i>=0;i--){
        // cout<<"i "<<i<<endl;
        if(i==k.size()-1){
            k1[i]=k[i];
        }
        else{
            // cout<<"adding "<<k[i]<<" "<<k[i-1]<<endl;
            k1[i]=k[i]+k1[i+1];
        }
        // for(auto i:k1){
        //     cout<< i<<" ";
        // }
        // cout<<endl;
    }
    
    // cout<<":::::::::::::::::::::::;"<<endl;
    // for(auto i:k1){
    //     cout<< i<<" ";
    // }
    // cout<<endl;

    
    long long sum=0;
    // cout<<"sum"<<endl;
    for(long i=0;i<k.size()-1;i++){
        // cout<<"multiplying "<<k[i]<<" and "<<k1[i+1]<<endl;
        sum+=(k[i]*k1[i+1]);
        // cout<<sum<<" ";
    }
    
    
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    ofstream fout(getenv("OUTPUT_PATH"));

    string np_temp;
    getline(cin, np_temp);

    vector<string> np = split_string(np_temp);

    int n = stoi(np[0]);

    int p = stoi(np[1]);

    vector<vector<int>> astronaut(p);
    for (int i = 0; i < p; i++) {
        astronaut[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> astronaut[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long long result = journeyToMoon(n, astronaut);

    fout << result << "\n";

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
