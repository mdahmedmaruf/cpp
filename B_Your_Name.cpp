#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        // Quick length check
        if (s.size() != t.size())
        {
            cout << "NO\n";
            continue;
        }

        array<int, 26> freqS = {0}, freqT = {0};
        for (char c : s)
            freqS[c - 'a']++;
        for (char c : t)
            freqT[c - 'a']++;

        if (freqS == freqT)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
