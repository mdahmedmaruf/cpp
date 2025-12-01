#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, problem = 0, solved = 0;
    cin >> n >> k;
    k = 240 - k;
    for (int i = 1; i <= n; i++)
    {
        problem += i * 5;
        if (problem <= k)
            solved++;
        else
            break;
    }
    cout << solved << endl;

    return 0;
}