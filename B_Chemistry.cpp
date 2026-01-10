#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> m;

        for (int i = 0; i < n; i++)
            m[s[i]]++;

        int count = 0;
        for (int i = 'a'; i <= 'z'; i++)
            if (m[i] % 2)
                count++;

        if (count > k + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}