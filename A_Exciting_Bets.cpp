#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << " " << 0 << '\n';
        else
        {
            long long x = abs(a - b);
            long long y = a % x;
            y = min(y, x - y);
            cout << x << " " << y << '\n';
        }
    }

    return 0;
}