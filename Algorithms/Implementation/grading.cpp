#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    for(int grade_i = 0;grades_i < n; grades_i++){
        if(grades[grades_i]<38)
            printf("%d\n",grades[grades_i]);
        else{
            if((grades[grades_i]%10)>7){
                grades[grades_i]+=10-(grades[grades_i]%10);
            }
            else if(((grades[grades_i]%10)>2)&&((grades[grades_i]%10)<6)){
                grades[grades_i]+=5-(grades[grades_i]%10);
            }
            printf("%d\n",grades[grades_i]);
        }
    }
    return 0;
}
