#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long a[n], s1[n], s2[n];

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        s1[i] = s1[i - 1];
        if (a[i] < a[i - 1])
            s1[i] += a[i - 1] - a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        s2[i] = s2[i + 1];
        if (a[i + 1] > a[i])
            s2[i] += a[i + 1] - a[i];
    }

    while (m--)
    {
        int s, t;
        cin >> s >> t;
        if (s < t)
            cout << s1[t] - s1[s] << endl;
        else
            cout << s2[t] - s2[s] << endl;
    }

    return 0;
}