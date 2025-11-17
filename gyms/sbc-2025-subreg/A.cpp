#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m; cin>>n>>m;

    vector<vector<long long>> vetor (n, vector<long long>(m));
    long long somaLinha = 0;
    for (int i = 0; i < n; i++) {
        long long soma = 0;
        for (int j = 0; j < m; j++) {
            cin >> vetor[i][j];
            soma += vetor[i][j];
        }

        if (soma > somaLinha)
            somaLinha = soma;
    }

    long long res = 0;
    for (int i = 0; i < m; i++) {
        long long maior = 0;
        for (int j = 0; j < n; j++) {
            if (vetor[j][i] > maior)
                maior = vetor[j][i];
        }

        res += maior;
    }

    cout << max(somaLinha, res) << endl;

    return 0;
}