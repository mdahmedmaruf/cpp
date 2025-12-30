#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int f, t, m = INT_MIN;
    while (n--)
    {
        cin >> f >> t;
        m = max(m, t > k ? f - (t - k) : f);
    }
    cout << m << "\n";

    return 0;
}