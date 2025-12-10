#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int rem = 60 - m;
        int ans = rem + (23 - h) * 60;
        cout << ans << endl;
    }

    return 0;
}