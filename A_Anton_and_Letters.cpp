#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> letters;
    set<char> i = {'{', '}', ','};
    char c;
    while (cin >> c)
    {
        if (i.find(c) == i.end())
            letters.insert(c);
    }
    cout << letters.size() << endl;

    return 0;
}