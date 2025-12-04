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
        int a[n], count[101] = {0};

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (count[a[i]] == 1)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}