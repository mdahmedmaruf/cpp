#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mc = 0;         // max count mc
    string s, ss, twogram; // substring ss
    map<string, int> smp;  // string map smp

    cin >> n >> s;

    for (int i = 0; i < n - 1; i++)
    {
        ss = s[i], ss += s[i + 1], smp[ss]++; // AB:1
        if (smp[ss] > mc)
            mc = smp[ss], twogram = ss;
    }

    cout << twogram;

    return 0;
}