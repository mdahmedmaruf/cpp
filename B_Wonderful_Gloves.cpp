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
        vector<long long> l(n), r(n);
        for (int i = 0; i < n; i++)
            cin >> l[i];
        for (int i = 0; i < n; i++)
            cin >> r[i];

        long long base = 0;
        vector<long long> mins;
        mins.reserve(n);

        for (int i = 0; i < n; i++)
        {
            base += max(l[i], r[i]);
            mins.push_back(min(l[i], r[i]));
        }

        sort(mins.begin(), mins.end(), greater<long long>());

        long long add = 0;
        int m = k - 1;
        for (int i = 0; i < m; i++)
            add += mins[i];

        cout << (base + add + 1) << "\n";
    }

    return 0;
}
