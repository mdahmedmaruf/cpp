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
        string s = "989";
        if (n == 1)
            cout << "9" << endl;
        if (n == 2)
            cout << "98" << endl;
        if (n >= 3)
        {
            cout << s;
            for (int i = 0; i < n - 3; i++)
                cout << i % 10;
            cout << endl;
        }
    }

    return 0;
}