#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, partitions, result;
    cin >> n >> k;

    if (n % 2 == 0)
        partitions = n / 2;
    else
        partitions = n / 2 + 1;

    if (k <= partitions)
        result = 2 * k - 1;
    else
        result = 2 * (k - partitions);

    cout << result << endl;

    return 0;
}