#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        cout << s[0];
        for (int i = 1; i < n; i++)
        {
            if ((s[i + 1] == 'a' || s[i + 1] == 'e'))
                cout << ".";
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}