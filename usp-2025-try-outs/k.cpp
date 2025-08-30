#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B, A;
    unordered_set<int> ingre_nao_gosta;
    int etapa_ruim = 0;

    // numero de etapas
    cin >> N;

    // total de ingredientes e total que não gosta
    cin >> A >> B;

    for (int i = 0; i < B; i++) {
        int ingrediente;
        cin >> ingrediente;
        ingre_nao_gosta.insert(ingrediente);
    }

    for (int i= 0; i < N; i++) {
        int M;
        int quant_nao_gosta_etapa = 0;

        // numeros de ingredientes na etapa
        cin >> M;
        vector<int> ingredientes_etapa;

        // adicionando ingredientes da etapa
        for (int j = 0; j < M; j++) {
            int ingrediente_etapa;
            cin >> ingrediente_etapa;
            if (ingre_nao_gosta.count(ingrediente_etapa)) {
                quant_nao_gosta_etapa++;
            }
        } 

        if ((double)quant_nao_gosta_etapa/M > 1.0/3) {
            etapa_ruim = i + 1;
            break;
        }
    }

    if (etapa_ruim != 0) {
        cout << etapa_ruim << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}