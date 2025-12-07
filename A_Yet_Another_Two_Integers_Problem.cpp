#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        int diff = abs(a - b);
        if (diff % 10 == 0)
            cout << diff / 10 << '\n';
        else
            cout << diff / 10 + 1 << '\n';
    }

    return 0;
}