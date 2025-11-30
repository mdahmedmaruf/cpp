#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    for (int denominations : {100, 20, 10, 5, 1})
    {
        ans += n / denominations;
        n %= denominations;
    }
    cout << ans << endl;

    return 0;
}