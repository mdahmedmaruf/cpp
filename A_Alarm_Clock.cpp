#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long sleep = -1;
        if (b >= a)
        {
            sleep = b;
        }
        else
        {
            if (d >= c)
            {
                sleep = -1;
            }
            else
            {
                long long need = a - b;
                long long per = c - d;
                long long times = (need + per - 1) / per;
                sleep = b + times * c;
            }
        }
        cout << sleep << endl;
    }

    return 0;
}