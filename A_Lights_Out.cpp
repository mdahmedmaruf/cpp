#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j];
    for (int i = 1; i <= 3; i++, cout << endl)
        for (int j = 1; j <= 3; j++)
            cout << ((a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1]) % 2 == 0);

    return 0;
}