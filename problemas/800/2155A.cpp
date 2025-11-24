#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, soma;
        cin >> a; 
        int b = a - 2;
 
        if (b != 0) {
            soma = a + b;
            cout << soma << '\n';
        } else
            cout << "2" << '\n';
    }
    
    return 0;
}