#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, a1 = 0, b1 = 0;
    cin >> a >> b >> c >> d;

    a1 = b * log(a);
    b1 = d * log(c);
    if(a1 > b1)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    
    return 0;
}