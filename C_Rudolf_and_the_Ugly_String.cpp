#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie")
                cnt++;
            if (s.substr(i, 5) == "mapie")
                cnt--;
        }
        cout << cnt << endl;
    }

    return 0;
}