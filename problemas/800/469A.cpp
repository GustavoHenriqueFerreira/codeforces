#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;

    vector<int> valoresP;
    vector<int> valoresFaltantesP;

    for (int i = 0; i < p; i++){
        int v;
        cin >> v;
        valoresP.push_back(v);
    }

    if (p > 0)
        for (int i = 0; i < n; i++){
            int valor = i+1;

            for (int j = 0; j < p; j++) {
                if (valor == valoresP[j]) {
                    break;
                }
                else if (j == p-1 && valor != valoresP[j]) {
                    valoresFaltantesP.push_back(valor);
                }
            }
        }
    else 
        for (int j = 0; j < n; j++) {
            valoresFaltantesP.push_back(j+1);
        }

    int q;
    cin >> q;
    vector<int> valoresQ;

    for (int i = 0; i < q; i++){
        int v;
        cin >> v;
        valoresQ.push_back(v);
    }

    bool res = true;
    if (valoresFaltantesP.size() > 0) 
        if (valoresQ.size() > 0)
            for (int num : valoresFaltantesP) {
                if (res == true)
                    for (int j = 0; j < q; j++) {
                        if (num == valoresQ[j]) {
                            break;
                        }

                        else if (j == q-1 && num != valoresQ[j]) {
                            res = false;
                            break;
                        }
                    }
                else 
                    break;
            }
        else 
            res = false;

    if (res == true)
        cout << "I become the guy." << endl;

    if (res == false)
        cout << "Oh, my keyboard!" << endl;

    return 0;
}