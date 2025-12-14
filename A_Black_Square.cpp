#include <bits/stdc++.h>
using namespace std;

int a[5], c = 0;
string s;
int main()
{
    cin >> a[1] >> a[2] >> a[3] >> a[4] >> s;

    for (int i = 0; i < s.size(); i++)
        c += a[s[i] - '0'];

    cout << c << endl;

    return 0;
}