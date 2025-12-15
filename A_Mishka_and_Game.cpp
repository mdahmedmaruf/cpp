#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p = 0;
    cin >> n;
    while (n--)
    {
        int m, c;
        cin >> m >> c;
        p += (m > c);
        p -= (m < c);
    }

    if (p > 0)
        cout << "Mishka";
    else if (p < 0)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    return 0;
}