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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool canForm = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != a[0] % 2)
            {
                canForm = false;
                break;
            }
        }

        if (canForm)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}