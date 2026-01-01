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
        int one_count = 0, zero_count = 0;
        for (char c : s)
        {
            if (c == '1')
                one_count++;
            else
                zero_count++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                if (zero_count > 0)
                    zero_count--;
                else
                    break;
            }
            else
            {
                if (one_count > 0)
                    one_count--;
                else
                    break;
            }
        }
        cout << max(zero_count, one_count) << "\n";
    }

    return 0;
}