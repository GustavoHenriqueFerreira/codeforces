#include <bits/stdc++.h>
using namespace std;

struct Monstro {
    long long b, c;
};

bool cmp(const Monstro &x, const Monstro &y) {
    if ((x.c == 0) && (y.c == 0)) return x.c > y.c; // c > 0 primeiro
    return x.b < y.b; // menor dano depois
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        multiset<long long> armas;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            armas.insert(x);
        }

        vector<Monstro> monstros(m);
        for (int i = 0; i < m; i++) cin >> monstros[i].b;
        for (int i = 0; i < m; i++) cin >> monstros[i].c;

        sort(monstros.begin(), monstros.end(), cmp);

        long long mortos = 0;

        for (auto &monstro : monstros) {
            auto it = armas.lower_bound(monstro.b);
            if (it == armas.end()) continue; 
            
            long long arma = *it;
            armas.erase(it);
            mortos++;

            if (monstro.c) 
                armas.insert(max(monstro.c, arma));
        }

        cout << mortos << '\n';
    }

    return 0;
}
