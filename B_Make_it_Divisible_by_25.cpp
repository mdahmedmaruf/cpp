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
        int n = s.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int no = s[i] - '0';
                no = no * 10 + s[j] - '0';
                if (no % 25 == 0)
                    ans = min(ans, j - i - 1 + n - j - 1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}