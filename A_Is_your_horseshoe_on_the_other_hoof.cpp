#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> hooves = {a, b, c, d};
    cout << 4 - hooves.size() << endl;

    return 0;
}