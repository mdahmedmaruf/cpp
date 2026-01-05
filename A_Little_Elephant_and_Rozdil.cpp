#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    pair<long long, long long> a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a + 1, a + n + 1);

    if (a[1].first == a[2].first)
        cout << "Still Rozdil" << endl;
    else
        cout << a[1].second << endl;

    return 0;
}