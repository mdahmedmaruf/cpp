#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, pos = 0;
        string s;
        cin >> n >> s;
        for (int i = 1; i < n; i++)
            if (s[i] == '?')
                if (s[i - 1] == 'R')
                    s[i] = 'B';
                else if (s[i - 1] == 'B')
                    s[i] = 'R';
        for (int i = n - 2; i >= 0; i--)
            if (s[i] == '?')
                if (s[i + 1] == 'R')
                    s[i] = 'B';
                else if (s[i + 1] == 'B')
                    s[i] = 'R';
        if (s[0] == '?')
            for (int i = 0; i < n; i++)
                if (i % 2)
                    s[i] = 'B';
                else
                    s[i] = 'R';
        cout << s << endl;
    }
}