#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double x = log10(a) + b, y = log10(c) + d;
        if (abs(x - y) <= 1e-7)
            cout << "=" << endl;
        else if (x > y)
            cout << ">" << endl;
        else
            cout << "<" << endl;
    }

    return 0;
}