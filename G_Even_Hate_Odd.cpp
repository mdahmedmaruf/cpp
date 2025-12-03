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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int even_items = 0, odd_items = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even_items++;
            else
                odd_items++;
        }

        if (n % 2 != 0)
            cout << -1 << endl;
        else
            cout << abs(even_items - odd_items) / 2 << endl;
    }

    return 0;
}