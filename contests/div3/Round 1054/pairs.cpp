#include <bits/stdc++.h>
using namespace std;

int main() {
    long long tests, size;

    cin >> tests;

    while (tests > 0) {
        cin >> size;
        vector<int> vetor;
        for (int i = 0; i < size; i++) {
            long long elemento = 0;
            cin >> elemento;
            vetor.push_back(elemento);
        }

        sort(vetor.begin(), vetor.end());

        int dif = vetor[1] - vetor[0];

        for (int i = 2; i < size; i = i + 2) {
            if (dif < vetor[i+1] - vetor[i]) {
                dif = vetor[i+1] - vetor[i];
            }
        }

        cout << dif << endl;

        tests--;
    }

    return 0;
}