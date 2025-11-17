#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // dias vendendo
    cin >> n;
    vector<int> precos (n);
    for (int i = 0; i < n; i++) cin >> precos[i]; // preco

    sort(precos.begin(), precos.end());
    int q; // dias deseja compra
    cin >> q;
    // vector<long long> disponivel (q);
    for (long long i = 0; i < q; i++) {
        long long mi;
        cin >> mi; 
    
        cout << upper_bound(precos.begin(), precos.end(), mi) - precos.begin() << endl;
    }

    // TLE :(
    // for (int i = 0; i < q; i++) {
    //     long long disponivelDia = disponivel[i];
    //     int lojas = 0;
    //     for (int j = 0; j < n; j++) {
    //         int precoLoja = precos[j];
    //         if (disponivelDia >= (long long)precoLoja)
    //             lojas++;
    //     }

    //     cout << lojas << endl;
    // }

    return 0;
}