#include <bits/stdc++.h>
using namespace std;

pair<int, int> numerador(int quant) {
        if (quant == 1) {
            return {1, 2};
        }

        if (quant == 2) {
            return {2, 3};
        }

        pair<int, int> primeiroPar = numerador(quant - 2);
        pair<int, int> segundoPar = numerador(quant - 1);

        pair<int, int> parNovo = {primeiroPar.first + segundoPar.first, primeiroPar.second + segundoPar.second};

        return parNovo;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N; //valor de pn

    pair<int, int> resultado = numerador(N);
    cout << resultado.first << endl;

    return 0;
}