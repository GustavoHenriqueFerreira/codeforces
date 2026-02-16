#include <bits/stdc++.h>
using namespace std;

long long palin(long long esq, int bits) {
    long long res = esq;
    long long x = esq >> (bits & 1);
    while (x) {
        res = (res << 1) | (x & 1);
        x >>= 1;
    }
    return res;
}

int main() {
    long long n; 
    cin >> n;

    int bits = 64 - __builtin_clzll(n);
    int metade = (bits + 1) / 2;
    long long esq = n >> (bits - metade);

    long long res = palin(esq, bits);
    if (res > n)
        res = palin(esq - 1, bits);

    long long menorBits = (1LL << (bits - 1)) - 1;
    res = max(res, menorBits);

    cout << res << '\n';
}