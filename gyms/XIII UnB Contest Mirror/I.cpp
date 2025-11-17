#include <bits/stdc++.h>
using namespace std;

bool eh_valido(int m, int n, int M, int N) {
    return m >= 0 && m < M && n >= 0 && n < N;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    vector<vector<char>> vetor (m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> vetor[i][j];
        }
    }

    int uvas = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // cout << vetor[i][j] << endl;

            if (tolower(vetor[i][j]) == 'v') {
                // vertical
                int m1 = i - 1, n1 = j;
                int m2 = i + 1, n2 = j;
                if (eh_valido(m1, n1, m, n) && eh_valido(m2, n2, m, n)) {
                    char char1 = tolower(vetor[m1][n1]);
                    char char2 = tolower(vetor[m2][n2]);
                    if ((char1 == 'u' && char2 == 'a') || (char1 == 'a' && char2 == 'u')) {
                        uvas++;
                    }
                }

                // horizontal
                m1 = i; n1 = j - 1;
                m2 = i; n2 = j + 1;
                if (eh_valido(m1, n1, m, n) && eh_valido(m2, n2, m, n)) {
                    char char1 = tolower(vetor[m1][n1]);
                    char char2 = tolower(vetor[m2][n2]);
                    if ((char1 == 'u' && char2 == 'a') || (char1 == 'a' && char2 == 'u')) {
                        uvas++;
                    }
                }

                // diagonal
                m1 = i - 1; n1 = j - 1;
                m2 = i + 1; n2 = j + 1;
                if (eh_valido(m1, n1, m, n) && eh_valido(m2, n2, m, n)) {
                    char char1 = tolower(vetor[m1][n1]);
                    char char2 = tolower(vetor[m2][n2]);
                    if ((char1 == 'u' && char2 == 'a') || (char1 == 'a' && char2 == 'u')) {
                        uvas++;
                    }
                }

                // diagonal
                m1 = i - 1; n1 = j + 1;
                m2 = i + 1; n2 = j - 1;
                if (eh_valido(m1, n1, m, n) && eh_valido(m2, n2, m, n)) {
                    char char1 = tolower(vetor[m1][n1]);
                    char char2 = tolower(vetor[m2][n2]);
                    if ((char1 == 'u' && char2 == 'a') || (char1 == 'a' && char2 == 'u')) {
                        uvas++;
                    }
                }
            }
        }
    }

    cout << uvas << endl;

    return 0;
}