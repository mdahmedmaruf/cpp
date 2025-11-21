#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i += 2)
    {
        int min_index = i;
        for (int j = i + 2; j < s.length(); j += 2)
        {
            if (s[j] < s[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
            swap(s[i], s[min_index]);
    }

    cout << s << endl;

    return 0;
}