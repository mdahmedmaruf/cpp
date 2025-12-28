#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int l = n * (a - b), r = n * (a + b);
        if (r < c - d || c + d < l)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}