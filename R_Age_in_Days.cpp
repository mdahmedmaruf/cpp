#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age_in_days;
    cin >> age_in_days;

    int years = age_in_days / 365;
    age_in_days %= 365;
    int months = age_in_days / 30;
    int days = age_in_days % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}