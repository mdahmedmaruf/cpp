#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int t1 = 60 * h + m; // cout<<t1<<endl;
        int ans = 24 * 60;
        for (int i = 0; i < n; i++)
        {
            cin >> h >> m;
            int t2 = 60 * h + m - t1;
            if (t2 < 0)
                t2 += 24 * 60;
            ans = min(ans, t2);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }

    return 0;
}