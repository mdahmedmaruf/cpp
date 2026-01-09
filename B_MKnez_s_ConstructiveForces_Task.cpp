#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
            cout << "1 -1 ";
        cout << endl;
    }
    else
    {
        int k = n / 2;
        for (int i = 0; i < n - 1; i += 2)
            cout << k - 1 << ' ' << -k << ' ';
        cout << k - 1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}