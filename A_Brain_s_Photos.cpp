#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char c;
    while (cin >> c)
    {
        if (c != 'B' && c != 'W' && c != 'G')
        {
            cout << "#Color" << endl;
            return 0;
        }
    }
    cout << "#Black&White" << endl;

    return 0;
}