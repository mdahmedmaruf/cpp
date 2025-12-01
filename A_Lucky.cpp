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
        int left_sum = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int right_sum = s[3] - '0' + s[4] - '0' + s[5] - '0';
        if (left_sum == right_sum)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}