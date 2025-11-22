#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        string y = to_string(year);
        set<char> digits(y.begin(), y.end());
        if (digits.size() == 4)
        {
            cout << year << endl;
            break;
        }
    }

    return 0;
}