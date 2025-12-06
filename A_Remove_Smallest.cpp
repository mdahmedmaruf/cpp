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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        bool canRemove = false;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                cout << "NO" << endl;
                canRemove = true;
                break;
            }
        }
        if (!canRemove)
            cout << "YES" << endl;
    }

    return 0;
}