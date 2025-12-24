#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, r;
    vector<int> a;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        cin >> r;
        a.push_back(r);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < c; i++)
        cout << a[i] << " ";

    return 0;
}