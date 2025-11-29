#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int fre[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        char ch = tolower(s[i]);
        int idx = ch - 'a';
        fre[idx]++;
    }

    cout << min({fre['e' - 'a'], fre['g' - 'a'], fre['y' - 'a'], fre['p' - 'a'], fre['t' - 'a']});

    return 0;
}