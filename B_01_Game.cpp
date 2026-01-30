#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int a[2] = {};

        for (char c : s)
            a[c - '0']++;

        cout << (min(a[0], a[1]) % 2 ? "DA" : "NET") << endl;
    }

    return 0;
}