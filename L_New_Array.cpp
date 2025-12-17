#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> result;
    result.insert(result.end(), b.begin(), b.end());
    result.insert(result.end(), a.begin(), a.end());

    for (auto x : result)
        cout << x << " ";

    return 0;
}