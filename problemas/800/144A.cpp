#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    vector<int> vetor (n);

    cin >> vetor[0];
    pair<int, int> minimo = {0, vetor[0]};
    pair<int, int> maximo = {0, vetor[0]};

    for (int i = 1; i < n; i++) {
        cin >> vetor[i];

        if (vetor[i] > maximo.second) {
            maximo = {i, vetor[i]};
        }
        if (vetor[i] <= minimo.second) {
            minimo = {i, vetor[i]};
        }
    }

    // (i max - 0) move pra frente o maior 
    // (n - 1 - i min) move pra tras o menor
    int movs = maximo.first + (n - 1 - minimo.first);

    if (maximo.first > minimo.first) 
        movs--;

    cout << movs << endl;

    // primeira forma - força bruta
    // for (int i = 1; i < n; i++) {
    //     cin >> vetor[i];

    //     if (vetor[i] > maximo.second) {
    //         maximo = {i, vetor[i]};
    //     }
    // }

    // int contador = 0;
    // int iteradorMaximo = maximo.first; 
    // while (vetor[0] != maximo.second){
    //     swap(vetor[iteradorMaximo-1], vetor[iteradorMaximo]);
    //     iteradorMaximo--;
    //     contador++;
    // }

    // for (int i = 1; i < n; i++) {
    //     if (vetor[i] <= minimo.second) {
    //         minimo = {i, vetor[i]};
    //     }
    // }

    // int iteradorMinimo = minimo.first; 
    // while (vetor[n-1] != minimo.second){
    //     swap(vetor[iteradorMinimo+1], vetor[iteradorMinimo]);
    //     iteradorMinimo++;
    //     contador++;
    // }

    // cout << contador << endl;
    
    return 0;
}