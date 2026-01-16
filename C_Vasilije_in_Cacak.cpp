#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long total = n * (n + 1) / 2;
        long long maxSum = total - (n - k) * (n - k + 1) / 2;
        long long minSum = k * (k + 1) / 2;

        if (x >= minSum && x <= maxSum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}