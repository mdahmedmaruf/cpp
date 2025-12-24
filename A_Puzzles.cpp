#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a, a + m);
    int MIN = a[n - 1] - a[0];
    for (int i = 0; i <= m - n; i++)
    {
        MIN = min(MIN, a[i + n - 1] - a[i]);
    }
    cout << MIN << endl;

    return 0;
}