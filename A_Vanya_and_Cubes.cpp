#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h = 0, count = 0;
    cin >> n;
    while (count <= n)
    {
        h++;
        count += h * (h + 1) / 2;
    }
    cout << h - 1 << endl;

    return 0;
}