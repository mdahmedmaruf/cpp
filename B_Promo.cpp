#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> a(n), b(n + 1, 0); // b has size n+1 for prefix sums

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<long long>()); // sort descending

    for (int i = 1; i <= n; i++)
        b[i] = b[i - 1] + a[i - 1]; // prefix sum

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int left = x - y;
        cout << b[x] - b[left] << endl;
    }

    return 0;
}
