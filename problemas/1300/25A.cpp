#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vetor (n);
    for (int i = 0; i < n; i++) cin >> vetor[i];
    
    int primeiro = vetor[0] % 2;
    int segundo = vetor[1] % 2;
    int terceiro = vetor[2] % 2;

    if (primeiro == 0 && segundo == 0 && terceiro == 1){
        cout << 3 << endl;
    }
    if (primeiro == 0 && segundo == 1 && terceiro == 0){
        cout << 2 << endl;
    }
    if (primeiro == 1 && segundo == 0 && terceiro == 0){
        cout << 1 << endl;
    }
    if (primeiro == 1 && segundo == 1 && terceiro == 0){
        cout << 3 << endl;
    }
    if (primeiro == 1 && segundo == 0 && terceiro == 1){
        cout << 2 << endl;
    }
    if (primeiro == 0 && segundo == 1 && terceiro == 1){
        cout << 1 << endl;
    }
    
    if (primeiro + segundo + terceiro == 0) {
        for (int i = 0; i < n; i++) {
            if (vetor[i] % 2 == 1) {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    if (primeiro == 1 && segundo == 1 && terceiro == 1) {
         for (int i = 0; i < n; i++) {
            if (vetor[i] % 2 == 0) {
                cout << i+1 << endl;
                return 0;
            }
        }
    }

    return 0;
}