#include <bits/stdc++.h>
using namespace std;

void solve(int &t, int &remove) {
    string stones;
    cin >> stones;
    
    // verificar quais posicoes estão ruins
    // remover primeira posicao ruim
    // verificar se isso ja resolve
    for(int i = 0; i < t - 1; i++){
        if (stones[i] == stones[i+1]) {
            remove++;
        }
    }
    
    return;
}

int main() {
    int t;
    int remove = 0;

    cin >> t;

    solve(t, remove);

    cout << remove << endl;

    return 0;
}