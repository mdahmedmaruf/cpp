#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, cnt = 0, a[12]; // 12 months
    cin >> k;
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    sort(a, a + 12);
    for (int i = 11; i >= 0; i--)
    {
        if (k <= 0)
        {
            cout << cnt;
            return 0;
        }
        k -= a[i];
        cnt++;
    }
    cout << (k <= 0 ? cnt : -1);

    return 0;
}