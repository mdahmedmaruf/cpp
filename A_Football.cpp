#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int zero_count = 0, one_count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {

            one_count++;
            zero_count = 0;
        }
        else
        {
            zero_count++;
            one_count = 0;
        }
        if (zero_count == 7 || one_count == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}