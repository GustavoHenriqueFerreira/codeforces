#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) 
            cin >> a[i];

        ll max = *max_element(a.begin(), a.end());
        int posMax = 0;
        for (int i = 0; i < n; ++i) 
            if (a[i] == max) { 
                posMax = i; 
                break; 
            }

        vector<ll> b;
        b.reserve(n);
        for (int i = 0; i < n; ++i) 
            b.push_back(a[(posMax + i) % n]);

        vector<ll> pilha;
        pilha.push_back(-1);
        ll custo = 0;

        for (ll x : b) {
            while (pilha.back() < x) {
                pilha.pop_back();
                custo += min(pilha.back(), x);
            }
            pilha.push_back(x);
        }

        while (pilha.size() > 2) {
            pilha.pop_back();
            custo += pilha.back();
        }

        cout << custo << '\n';
    }
    return 0;
}
