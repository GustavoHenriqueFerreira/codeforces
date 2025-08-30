#include <iostream>
using namespace std;

int main() {
    int W, K;

    // ler dados de entrada
    cin >> W >> K;

    // ano que a diferenca dobre
    int dobro_diferenca = 2 * K - W;

    // imprimir
    cout << dobro_diferenca << endl;

    return 0;
}