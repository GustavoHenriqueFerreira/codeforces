#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, n;
    cin >> s >> n;
    bool v = true;

    vector<int> Xs (n);
    vector<int> Ys (n);
    cin >> Xs[0] >> Ys[0];
    for (int i = 1; i < n; i++){
        cin >> Xs[i] >> Ys[i];
        if (Xs[i] >= Xs[i-1])
            continue;
        else {
            int contador = i;
            for (int j = contador - 1; j > -1; j--) {
                if (Xs[j] > Xs[contador]) {
                    swap(Xs[j], Xs[contador]);
                    swap(Ys[j], Ys[contador]);
                    contador = j;
                }
                else 
                    break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if(Xs[i] < s) {
            s += Ys[i];
            continue;
        }
        else {
            v = false;
            break;
        }
    }

    if (v)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}

// jeito otimizado com sort
// int main() {
//     int s, n;
//     cin >> s >> n;

//     vector<pair<int, int>> drag(n);
//     for (int i = 0; i < n; i++) 
//         cin >> drag[i].first >> drag[i].second; // (x, y)

//     // Ordena por x crescente, e se empatar, por y decrescente
//     sort(drag.begin(), drag.end(), [](pair<int,int> a, pair<int,int> b){
//         if (a.first == b.first)
//             return a.second > b.second; // maior y primeiro se x for igual
//         return a.first < b.first;        // menor x primeiro
//     });

//     for (auto [x, y] : drag) {
//         if (s > x)
//             s += y;
//         else {
//             cout << "NO\n";
//             return 0;
//         }
//     }
//     cout << "YES\n";
//     return 0;
// }