#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;

    vector<long long> tempos (n);
    for (int i = 0; i < n; i++) cin >> tempos[i];

    sort(tempos.begin(), tempos.end());

    vector<pair<long long, long long>> LR (q);
    for (int i = 0; i < q; i++) {
        cin >> LR[i].first >> LR[i].second;
        
        auto comeco = lower_bound(tempos.begin(), tempos.end(), LR[i].first);
        auto fim = upper_bound(tempos.begin(), tempos.end(), LR[i].second);

        long long dist = distance(comeco, fim);

        cout << dist << endl;

        // se fosse imprimir intervalo
        // if (comeco == fim) {
        //     cout << '\n'; // nada no intervalo
        //     continue;
        // }
        // for (auto it = comeco; it != fim; ++it) {
        //     if (it != comeco) cout << ' ';
        //     cout << *it;
        // }
        // cout << '\n';
    }

    return 0;
}