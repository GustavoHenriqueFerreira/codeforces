#include <bits/stdc++.h>
using namespace std;

int main() {
    int vetor[5][5];
    int movs = 0;

    int x = 0;
    int y = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> vetor[i][j];
            if (vetor[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    while (x != 2 || y != 2) {
        if (x > 2) {
            x--;
            movs++;
            continue;
        }

        if (x < 2) {
            x++;
            movs++;
            continue;
        }

        if (y > 2) {
            y--;
            movs++;
            continue;
        }

        if (y < 2) {
            y++;
            movs++;
            continue;
        }
    }
    
    cout << movs << endl;

    return 0;
}