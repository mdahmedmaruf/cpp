#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int total_cost = k * (w * (w + 1)) / 2;
    int amount_to_borrow = total_cost - n;
    if (amount_to_borrow < 0)
        amount_to_borrow = 0;
    cout << amount_to_borrow << endl;

    return 0;
}