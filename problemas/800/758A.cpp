#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vetor (n);
    int max;
    cin >> vetor[0];
    max = vetor[0];

    for (int i = 1; i < n; i++) {
        cin >> vetor[i];

        if (max < vetor[i])
            max = vetor[i];
    }

    int cont = 0;

    for (int i = 0; i < n; i++) {
        if (vetor[i] < max) {
            cont = cont + (max - vetor[i]);
        }
    }

    cout << cont << endl;

    return 0;
}