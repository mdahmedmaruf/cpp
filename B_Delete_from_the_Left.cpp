#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int ans = a.size() + b.size();
    while (a.size() && b.size() && a.back() == b.back())
    {
        a.pop_back();
        b.pop_back();
        ans -= 2;
    }
    cout << ans << "\n";

    return 0;
}