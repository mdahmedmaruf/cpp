#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c, sum = 0, even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        sum += c;
        if (c % 2 == 0)
            even++;
        else
            odd++;
    }
    if (sum % 2 == 0)
        cout << even << "\n";
    else
        cout << odd << "\n";

    return 0;
}