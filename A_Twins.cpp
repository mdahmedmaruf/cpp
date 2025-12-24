#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], sum = 0,
              cnt = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    sum /= 2;
    for (int i = n - 1; i >= 0; i--)
    {
        curr += a[i];
        cnt++;
        if (curr > sum)
        {
            break;
        }
    }
    cout << cnt << endl;

    return 0;
}