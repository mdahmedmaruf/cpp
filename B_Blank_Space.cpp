#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e7 + 5;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0, cons = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                continue;
            cons++;
            if (i == n - 1 or a[i + 1] != a[i])
            {
                ans = max(ans, cons);
                cons = 0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}