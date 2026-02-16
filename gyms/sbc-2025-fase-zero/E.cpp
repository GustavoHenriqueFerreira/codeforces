#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long y, k; cin >> y >> k;
    long long x = 1;

    while (k > 0) {
        long long g = gcd(x, y);
        if (g == y) 
            break;

        x += g;
        k--;
    }

    x += k * y;

    cout << x << '\n';
    return 0;
}