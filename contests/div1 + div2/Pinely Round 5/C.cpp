#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n, x;
        cin >> n >> x;

        vector<long long> vetor(n);
        for (long long i = 0; i < n; i++) {
            cin >> vetor[i];
        }

        sort(vetor.begin(), vetor.end());
        int metade = n / 2;
        vector<long long> menores(vetor.begin(), vetor.begin() + metade);
        vector<long long> maiores(vetor.begin() + metade, vetor.end());

        vector<long long> ordem;
        long long soma = 0, pontos = 0;

        for (int i = 0; i < n; i++) {
            long long valorAtual = 0;
            
            if (i == 0) valorAtual = maiores[0];
            else if (i == 1) valorAtual = menores.back();
            else if (i == 2) valorAtual = menores[0];
            else if (i % 2 != 1) valorAtual = menores[menores.size() - (i/2) - 1];
            else valorAtual = maiores[i/2 - 1];
            
            ordem.push_back(valorAtual);
            
            long long somaAntiga = soma;
            soma += valorAtual;
            if (soma / x > somaAntiga / x) {
                pontos += valorAtual;
            }
        }

        cout << pontos << endl;
        for (auto v : ordem) cout << v << " ";
        cout << endl;
    }

    return 0;
}