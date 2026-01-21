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
        int k = INT_MAX, room, timer;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> room >> timer;
            v.push_back({room, timer});
        }

        for (int i = 0; i < v.size(); i++)
            k = min(k, v[i].first + (v[i].second - 1) / 2);
        cout << k << endl;
    }

    return 0;
}