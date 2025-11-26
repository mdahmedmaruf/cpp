#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, result = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        char letter = tolower(s[i]);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y')
            continue;
        result += '.';
        result += letter;
    }

    cout << result << endl;

    return 0;
}