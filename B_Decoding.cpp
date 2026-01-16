#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n & 1)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 == 1)
                cout << s[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                cout << s[i];
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 == 0)
                cout << s[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
                cout << s[i];
        }
    }
    return 0;
}