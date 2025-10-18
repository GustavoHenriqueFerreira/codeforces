#include <iostream>
using namespace std;

int main() {
    int tests, size;

    cin >> tests;

    while (tests > 0) {
        cin >> size;
        int zeros = 0;
        int negativos = 0;
        for (int i = 0; i < size; i++) {
            int elemento = 0;
            cin >> elemento;

            if (elemento == 0) {
                zeros++;
            }
            if (elemento == -1){
                negativos++;
            }
        }

        int operacoes = zeros;
        if (negativos % 2 != 0){
            operacoes = operacoes + 2;
        }

        cout << operacoes << endl;

        tests--;
    }

    return 0;
}