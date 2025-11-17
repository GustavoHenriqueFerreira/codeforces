#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long hori = (n + a - 1) / a;
    long long vert = (m + a - 1) / a;

    // arredonda pra cima:
    // x + y - 1 / y

    cout << hori * vert << endl;

    return 0;
}