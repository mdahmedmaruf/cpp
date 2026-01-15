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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> a(n); // forecast + original index
        vector<int> b(n), ans(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];

        // sort forecast with stable tie-breaker
        sort(a.begin(), a.end(), [](auto &p1, auto &p2)
             {
            if (p1.first == p2.first) return p1.second < p2.second;
            return p1.first < p2.first; });

        // pointer for b
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            // find next b[j] that fits |a[i].first - b[j]| <= k
            while (j < n && abs(a[i].first - b[j]) > k)
                j++;
            ans[a[i].second] = b[j];
            j++;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}
