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
        bool visible[26] = {false};

        int count_balloons = 0;
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            int idx = ch - 'A';
            if (!visible[idx])
            {
                visible[idx] = true;
                count_balloons += 2;
            }
            else
            {
                count_balloons += 1;
            }
        }
        cout << count_balloons << endl;
    }

    return 0;
}