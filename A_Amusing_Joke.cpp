#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string joke = s1 + s2;
    sort(joke.begin(), joke.end());
    sort(s3.begin(), s3.end());

    if (joke == s3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}