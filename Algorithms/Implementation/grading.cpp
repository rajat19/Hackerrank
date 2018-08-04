#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    int n = grades.size();
    vector<int> fin(n);
    int i;
    for(i=0; i<n; i++) {
        if(grades[i]<38) fin[i] = grades[i];
        else if(grades[i]%5 >2) {
            fin[i] = grades[i] + (5 - grades[i]%5);
        }
        else fin[i] = grades[i];
    }
    return fin;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "
" : "");
    }
    cout << endl;
    

    return 0;
}

