#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m, i;
    cin >> n >> m;

    for (i = n + 1; i <= m; i++)
    {
        if (is_prime(i))
            break;
    }
    cout << (i == m && is_prime(m) ? "YES" : "NO") << endl;

    return 0;
}