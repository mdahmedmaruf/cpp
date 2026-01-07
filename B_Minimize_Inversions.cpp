#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n), q(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];
        for (int i = 0; i < n; i++)
            cin >> q[i];

        vector<vector<int>> inv;
        for (int i = 0; i < n; i++)
            inv.push_back({p[i] - 1 + q[i] - 1, p[i], q[i]});

        sort(inv.begin(), inv.end());
        for (auto i : inv)
            cout << i[1] << " ";
        cout << endl;

        for (auto i : inv)
            cout << i[2] << " ";
        cout << endl;
    }

    return 0;
}