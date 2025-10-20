#include <bits/stdc++.h>
using namespace std;

void solve(int &x){ 
    string state;
    cin >> state;

    for (int i = 0; i < state.size(); i++) {
        if (state[i] == '+'){
            x++;
            return;
        }
        else if (state[i] == '-'){ 
            x--;
            return;
        }
    }
}

int main() {
    int t;

    cin >> t;
    int x = 0;

    while (t--) {
        solve(x);
    }    

    cout << x << endl;

    return 0;
}