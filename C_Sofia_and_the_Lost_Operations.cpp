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

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        unordered_map<long long, int> need;
        need.reserve(n * 2);

        unordered_set<long long> bvals;
        bvals.reserve(n * 2);

        for (int i = 0; i < n; i++)
        {
            bvals.insert(b[i]);
            if (a[i] != b[i])
                need[b[i]]++;
        }

        int m;
        cin >> m;
        vector<long long> d(m);
        for (int i = 0; i < m; i++)
            cin >> d[i];

        long long last = d[m - 1];
        if (!bvals.count(last))
        {
            cout << "NO\n";
            continue;
        }

        unordered_map<long long, int> cntD;
        cntD.reserve(m * 2);
        for (auto x : d)
            cntD[x]++;

        bool ok = true;
        for (auto &kv : need)
        {
            long long val = kv.first;
            int req = kv.second;
            if (cntD[val] < req)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
