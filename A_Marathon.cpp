#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c >> d;
        cout << (b > a) + (c > a) + (d > a) << '\n';
    }

    return 0;
}