#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;

    cin >> N; //diretores
    cin >> K; //duracao maxima

    int intervalo_falas_min = 0;

    if (N == 1) {
        cout << K << endl;
    }

    if (N > 1) {
        intervalo_falas_min = (N - 1) * 1;
        K = K - intervalo_falas_min;

        int min_diretor = K / N; // barra para quociente e porcentagem para resto
        cout << min_diretor << endl;
    }

    return 0;
}