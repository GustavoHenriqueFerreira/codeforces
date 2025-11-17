#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vetor (n);
    int numeroDeUm = 0;
    for(int i = 0; i < n; i++){
        cin >> vetor[i];
        if (vetor[i] == 1)
            numeroDeUm++;
    }

    vector<int> vetorCopia = vetor;
    // 0 0 1 1 1
    // 1 0 1 1 1 -> contar zeros 1 
    // 1 1 1 1 1 -> contar zeros 1 2
    // 1 1 0 1 1 -> contar zeros 1 2 3 
    // 1 1 0 0 1 -> contar zeros 1 2 3 4
    // 1 1 0 0 0 -> contar zeros 1 2 3 4 5

    // 0 1 1 1 1 -> contar zeros 2 
    //                           2 3
    //                           2 3 4
    //                           2 3 4 5

    vector<int> maiorOperacoes;
    for (int i = 0; i < n; i++) {        
        int cont = i;
        
        while (cont < n) {
            int maiorOperacao = 0;
            if (vetor[i] == 0)
                vetor[i] = 1;
            else 
                vetor[i] = 0;
    
            if (count(vetor.begin(), vetor.end(), 1) > maiorOperacao)
                maiorOperacao = count(vetor.begin(), vetor.end(), 1);
            // cout << i+1 << " ";
            for (int j = i+1; j < cont+1; j++) {
                if (vetor[j] == 0)
                    vetor[j] = 1;
                else 
                    vetor[j] = 0;

                // cout << j+1 << " ";
            }
            // cout << endl;

            if (count(vetor.begin(), vetor.end(), 1) > maiorOperacao)
                maiorOperacao = count(vetor.begin(), vetor.end(), 1);

            if (n == 1)
                maiorOperacao = count(vetor.begin(), vetor.end(), 1);
            
            cont++;
            vetor = vetorCopia;
            maiorOperacoes.push_back(maiorOperacao);
        }
    }

    numeroDeUm = *max_element(maiorOperacoes.begin(), maiorOperacoes.end());

    cout << numeroDeUm << endl;
    
    return 0;
}