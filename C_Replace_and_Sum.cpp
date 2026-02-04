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
        int n, q;
        cin >> n >> q;

        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];

        vector<int> M(n + 2, 0);
        // c[i] = max(a[i], b[i]); M[i] = max(c[i], M[i+1]) => suffix max
        for (int i = n; i >= 1; i--)
        {
            int c = max(a[i], b[i]);
            M[i] = max(c, M[i + 1]);
        }

        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + M[i];

        for (int qi = 0; qi < q; qi++)
        {
            int l, r;
            cin >> l >> r;
            long long ans = pref[r] - pref[l - 1];
            cout << ans << (qi + 1 == q ? '\n' : ' ');
        }
    }

    return 0;
}
