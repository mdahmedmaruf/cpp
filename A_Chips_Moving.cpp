#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        odd += x & 1;
    }
    cout << min(odd, n - odd) << "\n";

    return 0;
}