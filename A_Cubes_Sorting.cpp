#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        bool flag = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                flag = 1;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}