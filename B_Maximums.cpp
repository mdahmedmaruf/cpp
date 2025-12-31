#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        int a = b + x;
        x = max(x, a);
        cout << a << " ";
    }
    cout << "\n";

    return 0;
}