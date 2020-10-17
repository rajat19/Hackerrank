#include <bits/stdc++.h>

using namespace std;

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    tip_percent = round(meal_cost * tip_percent/100);
    tax_percent = round(meal_cost *  tax_percent/100);
    int totalCost = meal_cost + tip_percent + tax_percent;
    cout<<totalCost;
    
    return 0;
}
