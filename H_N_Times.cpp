#include <bits/stdc++.h>
using namespace std;

void print_chars(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        print_chars(n, c);
    }

    return 0;
}