#include <bits/stdc++.h>
using namespace std;
long long n, q, t, a[200005], pref[200005];

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> q;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        for (int i = 0; i < q; i++)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long sum = pref[l - 1] + (r - l + 1) * k + pref[n] - pref[r];
            if (sum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}