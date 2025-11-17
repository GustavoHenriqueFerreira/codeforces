#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;

    vector<int> vec (n+1);
    for (int i = 0; i < vec.size(); i++) cin>>vec[i];

    int passos = 0;
    vector<int> novo(vec.size() + 1, 0);

    while (!(vec[0] == 1 && vec.size() == 1)) {
        if (vec.back() == 1) {
            int k = vec.size();
            vector<int> novo(k + 1, 0);

            for (int i = 0; i < k; i++) {
                novo[i] += vec[i];        // mesmo grau
                novo[i + 1] += vec[i];    // grau+1
            }

            // +1 na constante
            novo[k] += 1;

            // posição com valor 2 vira 0
            for (int i = 0; i <= k; i++)
                if (novo[i] >= 2) novo[i] = 0;

            vec = novo;
        } else
            vec.pop_back();

        passos++;
    }

    cout << passos << '\n';

    return 0;
}