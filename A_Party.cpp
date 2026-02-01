#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[2000], temp, ans = 0, cnt;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        temp = a[i], cnt = 1;
        while (temp != -1)
            cnt++, temp = a[temp];
        ans = max(ans, cnt);
    }
    cout << ans;

    return 0;
}