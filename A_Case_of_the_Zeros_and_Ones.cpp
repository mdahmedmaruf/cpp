#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    char c;
    while (t--)
    {
        cin >> c;
        if (c == '1')
            count++;
        else
            count--;
    }
    cout << abs(count) << endl;

    return 0;
}