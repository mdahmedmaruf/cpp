#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, s, pow2 = 1;
        cin >> n;
        s = n * (n + 1) / 2;
        while (pow2 <= n)
            s -= pow2 * 2, pow2 *= 2;
        cout << s << endl;
    }

    return 0;
}