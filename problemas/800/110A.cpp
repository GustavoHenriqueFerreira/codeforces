#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int numerosSortudo = 0;

    for (long long i = 0; i < n.size(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            numerosSortudo++;
        }
    }   

    string contador = to_string(numerosSortudo);
    bool sorte = true;

    for (long long i = 0; i < contador.size(); i++) {
        if (contador[i] != '4' && contador[i] != '7') {
            sorte = false;
        }
    } 

    cout << (sorte ? "YES" : "NO") << endl;

    return 0;
}