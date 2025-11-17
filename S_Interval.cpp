#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    cin >> x;

    if(x >= 0 && x <= 25.0000)
        cout << "Interval [0,25]" << endl;
    else if(x > 25.0000 && x <= 50.0000)
        cout << "Interval (25,50]" << endl;
    else if(x > 50.0000 && x <= 75.0000)
        cout << "Interval (50,75]" << endl;
    else if(x > 75.0000 && x <= 100.0000)
        cout << "Interval (75,100]" << endl;
    else
        cout << "Out of Intervals" << endl;

    return 0;
}