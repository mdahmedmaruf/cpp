#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int num = 1, total = 0;
        for (int j = 0; j < n; j++)
            if (a[j] == num)
                num++;
            else
                total++;
        int ans = (total + k - 1) / k;
        cout << ans << endl;
    }

    return 0;
}