#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    vector<int> alturas (n);
    for (int i = 0; i < n; i++) cin >> alturas[i];
    
    int soma = 0;
    for (int i = 0; i < k; i++) soma += alturas[i]; 

    int somaMin = soma;
    int minPosGlobal = 1;

    for (int i = k; i < n; i++){
        soma -= alturas[i-k]; // sai a primeira posicao
        soma += alturas[i]; // entra atual

        if (soma < somaMin) {
            somaMin = soma;
            minPosGlobal = i - k + 2;
        }
    }

    cout << minPosGlobal << endl;
    // TLE
    // int somaMenor = INT_MAX;
    // int kAtual = k;
    // int minPosGlobal = 0;

    // for (int i = 0; i < n - k + 1; i++) {
    //     int soma = 0;
    //     int minPos = i+1;
    //     for (int j = i; j < kAtual; j++) {
    //         soma += alturas[j];
    //         // cout << alturas[j] << endl;
    //     }

    //     kAtual++;
    //     if (soma < somaMenor) {
    //         somaMenor = soma;
    //         minPosGlobal = minPos;
    //     }
    // }

    // cout << minPosGlobal << endl;

    return 0;
}