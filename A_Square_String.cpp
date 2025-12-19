#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, s;
        cin >> S;
        s = S.substr(0, S.size() / 2);
        if (s + s == S)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}