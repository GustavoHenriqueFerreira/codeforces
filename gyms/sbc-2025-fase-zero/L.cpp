#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long m; cin >> m;

    long long bits = 8 * m * 1e6;
    long long qubits = ceil(log2(bits));

    cout << qubits << '\n';

    return 0;
}