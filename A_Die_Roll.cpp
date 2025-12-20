#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int y, w;
    cin >> y >> w;

    int d = 6 - max(y, w) + 1;
    int g = gcd(d, 6); // use std::gcd

    cout << d / g << '/' << 6 / g;

    return 0;
}
