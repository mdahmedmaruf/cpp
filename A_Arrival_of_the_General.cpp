#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    int min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > a[max_index])
            max_index = i;
        if (a[i] <= a[min_index])
            min_index = i;
    }
    cout << (n - 1) - min_index + max_index - 0 - (min_index < max_index ? 1 : 0) << endl;

    return 0;
}