#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, f, a, b, temp = 0;
        cin >> n >> f >> a >> b;
        for (int i = 0; i < n; i++)
        {
            long long int val;
            cin >> val;
            f -= min((val - temp) * a, b); // per second cost = a
            temp = val;                    // restart cost = b
        }
        cout << (f > 0 ? "YES" : "NO") << endl;
    }

    return 0;
}