#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    int cnt_max = 0, cnt_min = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
            cnt_max++;
        if (a[i] == mn)
            cnt_min++;
    }

    if (mx == mn)
        cout << 0;
    else
        cout << (n - cnt_max - cnt_min);

    return 0;
}