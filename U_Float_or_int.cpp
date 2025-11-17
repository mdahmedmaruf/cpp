#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, x;
    int temp;
    cin >> a;
    b = a;
    temp = a;
    x = b - temp;
    if(x <= 0)
        cout << "int " << temp << endl;
    else
        cout << "float " << fixed << setprecision(3) << temp << " " << x << endl;
    
    return 0;
}