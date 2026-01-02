#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, p, p_min = INT_MAX, sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> p;
        if (p < p_min)
            p_min = p;
        sum += a * p_min;
    }

    cout << sum << endl;

    return 0;
}