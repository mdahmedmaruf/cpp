#include <bits/stdc++.h>
using namespace std;

int a[3005];
int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i; j <= n; j += i)
                a[j]++;
        }
        if (a[i] == 2)
            count++;
    }
    cout << count << endl;

    return 0;
}