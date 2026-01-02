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
        for (auto &x : a)
            cin >> x;

        int flag = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] < a[i] and a[i] > a[i + 1])
            {
                flag = 1;
                cout << "YES\n"
                     << i << " " << i + 1 << " " << i + 2 << endl;
                break;
            }
        }
        if (flag == 0)
            cout << "NO\n";
    }

    return 0;
}