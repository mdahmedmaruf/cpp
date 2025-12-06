#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long num)
{
    if (num < 2)
        return false;
    for (long long i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long fib[51];
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i < 51; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    bool prime[51];
    for (int i = 1; i < 51; i++)
    {
        prime[i] = is_prime(fib[i]);
    }

    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << (prime[n] ? "prime" : "not prime") << '\n';
    }
    return 0;
}
