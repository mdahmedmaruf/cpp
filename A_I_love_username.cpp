#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i;
    cin >> i;
    int max = i, min = i, count = 0;
    while (--t)
    {
        cin >> i;
        if (i > max)
        {
            max = i;
            count++;
        }
        else if (i < min)
        {
            min = i;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}