#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, v, sum = 0, result;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        sum += v;
    }

    result = sum / n;
    cout << fixed << setprecision(12) << result << endl;

    return 0;
}