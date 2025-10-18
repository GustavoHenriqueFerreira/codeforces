#include <bits/stdc++.h>
using namespace std;

int main() {
    long long tests;
    cin >> tests;

    while (tests--) {
        long long n, k;
        cin >> n >> k;

        vector<int> vetor(n);
        int aparicoesDeK = 0;

        for (int i = 0; i < n; i++) {
            cin >> vetor[i];
            if (vetor[i] == k) 
                aparicoesDeK++;
        }

        // Caso n == 1
        if (n == 1) {
            if (aparicoesDeK == 1) 
                cout << 1 << endl;
            else 
                cout << 0 << endl;
            continue;
        }

        vector<int> presente(k, 0);

        for (int i = 0; i < n; i++) {
            if (vetor[i] < k) 
                presente[vetor[i]] = 1;
        }

        int elementosFaltantes = 0;
        for (int i = 0; i < k; i++) {
            if (presente[i] == 0) 
                elementosFaltantes++;
        }

        int operacoes = max(elementosFaltantes, aparicoesDeK);
        cout << operacoes << endl;
    }

    return 0;
}