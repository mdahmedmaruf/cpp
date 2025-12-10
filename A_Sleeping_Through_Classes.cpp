#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long ans = 0, n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<long long, bool> vis;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                for (int j = i; j <= min(i + k, n - 1); j++)
                {
                    vis[j] = true;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == false)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
