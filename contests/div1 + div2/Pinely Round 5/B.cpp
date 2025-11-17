#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int matriz[n][n];
        bool v = true;

        int pretasTotal = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            if (n == 1) {
                continue;
            }
            
            int pretasLinha = 0;
            for (int j = 0; j < n; j++) {
                if (s[j] == '.') 
                    matriz[i][j] = 0;
                if (s[j] == '#')  {
                    matriz[i][j] = 1;
                    pretasLinha++;
                    pretasTotal++;
                }
            }

            if (pretasLinha >= 3 || (pretasLinha == n-1 && matriz[i][0] == matriz[i][n-1])) {
                v = false;
            }
        }

        for (int i = 0; i < n; i++){
            if (n == 1) {
                continue;
            }

            int pretaColuna = 0;
            for (int j = 0; j < n; j++){
                if (matriz[j][i] == 1) 
                    pretaColuna++;
            }

            if (pretaColuna >= 3 || (pretaColuna == n-1 && matriz[0][i] == matriz[n-1][i])) {
                v = false;
            }
        } 


        if (pretasTotal > (float)(n * n / 2) && n > 1) {
            v = false;
        }

        if (v == true)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}