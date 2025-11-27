#include <bits/stdc++.h>
using namespace std;

int main()
{
    string message, word = "hello";
    cin >> message;
    int j = 0;
    for (int i = 0; i < message.length() && j < word.length(); i++)
    {
        if (message[i] == word[j])
            j++;
    }
    if (j == word.length())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}