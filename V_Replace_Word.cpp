#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int idx = s.find("EGYPT");
    while (idx != -1)
    {
        s.replace(idx, 5, " ");
        idx = s.find("EGYPT", idx + 1);
    }

    cout << s;

    return 0;
}