#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i, count = 0, sum = 0;
    while (t--)
    {
        cin >> i;
        if (sum + i < 0)
            count++;
        else
            sum += i;
    }

    cout << count << endl;

    return 0;
}