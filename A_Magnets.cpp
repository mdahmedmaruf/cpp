#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, group = 0;
    cin >> n;
    string first = "", second = "";
    for (int i = 0; i < n; i++)
    {
        cin >> second;
        if (first != second)
        {
            group++;
            first = second;
        }
    }

    cout << group << endl;

    return 0;
}