#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], cont = 1, max = 1;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
            cont++;
        else
            cont = 1;
        max = max > cont ? max : cont;
    }

    cout << max << endl;

    return 0;
}