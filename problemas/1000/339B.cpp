#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;

    cin >> n >> m;
    vector<long long> vetor;
    
    for (long long i = 0; i < m; i++){
        long long v;
        cin >> v;
        vetor.push_back(v);
    }

    long long movs = 0;
    long long indiceAtualCasa = 1;
    
    for (long long i = 0; i < m; i++) {
        long long casa = vetor[i];

        if (casa > indiceAtualCasa) 
            movs = movs + (casa - indiceAtualCasa);
        else if (casa == indiceAtualCasa)
            continue;
        else 
            movs = movs + (n-indiceAtualCasa) + casa;

        indiceAtualCasa = casa;
    }

    cout << movs << endl;
}