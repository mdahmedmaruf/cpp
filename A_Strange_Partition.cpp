#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, y, mx = 0, mn = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            mn += y;
            mx += (y + x - 1) / x;
        }
        cout << (mn + x - 1) / x << " " << mx << endl;
    }

    return 0;
}