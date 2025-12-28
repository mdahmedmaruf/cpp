#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d, a, sum = 0, count = 0;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a <= b)
        {
            sum += a;
            if (sum > d)
            {
                count++;
                sum = 0;
            }
        }
    }
    cout << count << "\n";

    return 0;
}