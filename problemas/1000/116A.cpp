#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    int antigosTotal;
    int maior;
    cin >> antigosTotal;
    cin >> maior;

    antigosTotal = maior + antigosTotal;
    maior = antigosTotal;

    for (int i = 1; i < n; i++) {
        int saida;
        int chegada;

        cin >> saida >> chegada;

        antigosTotal = antigosTotal - saida + chegada;

        if (antigosTotal > maior) {
            maior = antigosTotal;
        }
    }

    cout << maior << endl;

    return 0;
}