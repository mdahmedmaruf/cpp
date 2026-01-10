#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<char, int> freq;
        string s = "";

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            for (char c = 'a'; c <= 'z'; c++)
                if (freq[c] == a)
                {
                    s.push_back(c);
                    freq[c]++;
                    break;
                }
        }
        cout << s << endl;
    }

    return 0;
}