#include <bits/stdc++.h>
using namespace std;

bool podeAlcancar(long long alvo, vector<long long> muralha, int n, int k) {
    int posicao = -1;
    for (int i = n-1; i >= 0; i--) {
        if (muralha[i] < alvo) {
            posicao = i;
            break;
        }
    }

    if (posicao == -1) 
        return true;

    for (int i = posicao; i >= 0 && k > 0; i--) {
        muralha[i] += k;
        k--;
    }

    for (int i = 0; i < n; i++) {
        if (muralha[i] < alvo) 
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long> muralha(n);
    for (int i = 0; i < n; i++) cin >> muralha[i];

    long long inicio = 0;
    long long fim = *max_element(muralha.begin(), muralha.end()) + k;
    long long resposta = 0;

    while (inicio <= fim) {
        long long meio = (inicio + fim) / 2;

        if (podeAlcancar(meio, muralha, n, k)) {
            resposta = meio;
            inicio = meio + 1;
        } else
            fim = meio - 1;
    }

    cout << resposta << "\n";
    return 0;
}
