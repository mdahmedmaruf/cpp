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
        vector<long long> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                sum -= 2;
            else
                sum -= 1;
        }

        if (sum < 0 || n == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}