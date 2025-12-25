#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 0)
    {
        int no_ones = n / 10;
        int no_tens = (n / 100) * 10 + (n % 10);
        cout << max(no_ones, no_tens) << endl;
    }
    else
    {
        cout << n << endl;
    }

    return 0;
}