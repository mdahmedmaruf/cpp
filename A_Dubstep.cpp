#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool needSpace = false;
    bool printedAny = false;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (i + 2 < (int)s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            needSpace = printedAny;
            i += 2;
        }
        else
        {
            if (needSpace)
            {
                cout << ' ';
                needSpace = false;
            }
            cout << s[i];
            printedAny = true;
        }
    }

    return 0;
}
