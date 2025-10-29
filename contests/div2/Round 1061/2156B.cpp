#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int q;
        cin >> n >> q;
 
        string s;
        cin >> s;

        int quantA = count(s.begin(), s.end(), 'A');
        int quantB = n - quantA;
 
        for (int i = 0; i < q; i++) {
            long long a;
            cin >> a;
 
            int operacoes = 0;
            int contador = 0;

            if (quantB == 0) {
                operacoes = a;
            } else {
                while (a > 0) {
                    if (s[contador] == 'B') {
                        a = a / 2;
                        operacoes++;
                    } else {
                        a--;
                        operacoes++;
                    }
    
                    if (contador == n - 1) {
                        contador = 0;
                    } else if (contador < n - 1) {
                        contador++;
                    }
                } 
            }
 
            cout << operacoes << endl;
        }
    }
    
    return 0;
}