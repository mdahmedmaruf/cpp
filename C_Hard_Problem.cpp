#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin >> t;
    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        int row_1 = min(a, m);
        int row_2 = min(b, m);
        long long total = 2 * m;
        long long occupied = row_1 + row_2;
        long long remaining = total - occupied;
        long long for_third_row = min(c, remaining);
        long long result = row_1 + row_2 + for_third_row;
        cout << result << endl;
    }
    
    return 0;
}