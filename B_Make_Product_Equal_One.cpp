#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int z = 0, neg = 0, c = 0;
    while (n--)
    {
        long long int a;
        cin >> a;
        if (a == 0)
            z++;
        else if (a > 0)
            c += a - 1;
        else
        {
            neg++;
            c += -1 - a;
        }
    }
    if (z)
        c += z;
    else
    {
        if (neg % 2 != 0)
            c += 2;
    }
    cout << c << endl;

    return 0;
}