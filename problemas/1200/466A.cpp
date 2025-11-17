#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int quant;

    //individual
    int comprasIndividuais = n * a;

    // juntos
    int comprasJuntos = n / m * b;
    int resto = n % m;
    comprasJuntos += min(resto*a, b);

    quant = min(comprasJuntos, comprasIndividuais);
    cout << quant << endl;
    
    return 0;
}