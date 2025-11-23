#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pos;
    cin >> n;
    vector<int> gifts(101);
    for (int i = 1; i <= n; i++)
    {
        cin >> pos;
        gifts[pos] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << gifts[i] << " ";
    }

    return 0;
}