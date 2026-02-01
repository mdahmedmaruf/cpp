#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while (n--)
        {
            int temp = (x / 2) + 10;
            if (x <= temp)
                break;
            x = temp;
        }
        if (x <= m * 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}