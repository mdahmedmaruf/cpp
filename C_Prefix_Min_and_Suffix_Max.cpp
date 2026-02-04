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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<char> pref(n, 0), suf(n, 0);

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mn)
            {
                mn = a[i];
                pref[i] = 1;
            }
        }

        int mx = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > mx)
            {
                mx = a[i];
                suf[i] = 1;
            }
        }

        string ans;
        ans.reserve(n);
        for (int i = 0; i < n; i++)
        {
            ans.push_back((pref[i] || suf[i]) ? '1' : '0');
        }
        cout << ans << "\n";
    }

    return 0;
}