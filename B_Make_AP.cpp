#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;

        int A = b - (c - b);
        int B = a + (c - a) / 2;
        int C = b + (b - a);

        if (A != 0 && A >= a && A % a == 0)
            cout << "YES\n";

        else if (B && B >= b && B % b == 0 && (c - a) % 2 == 0)
            cout << "YES\n";

        else if (C && C >= c && C % c == 0)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}