#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < k && b[i] > a[i])
                sum += b[i];
            else
                sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}