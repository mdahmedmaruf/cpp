#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int consecutiveWater = 0;
        int emptySpaces = 0;
        for (char c : s)
        {
            if (c == '.')
            {
                emptySpaces++;
                consecutiveWater++;
                if (consecutiveWater == 3)
                    break;
            }
            else
                consecutiveWater = 0;
        }
        if (consecutiveWater == 3)
            cout << 2 << endl;
        else
            cout << emptySpaces << endl;
    }

    return 0;
}