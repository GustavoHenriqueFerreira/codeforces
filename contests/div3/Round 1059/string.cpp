#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string palindromo) {
    int size = palindromo.size();

    for (int i = 0; i < size / 2; i++) {
        if (palindromo[i] != palindromo[size - 1 - i]){
            return false;
        }
    }

    return true;
}

int main() {
    int tests, size;

    cin >> tests;

    while (tests > 0) {
        cin >> size;

        string element;
        cin >> element;
        vector<int> posicaoRemovidos;
        int quantidade = 0;
            
        if(isPalindrome(element)) {
            cout << "0" << "\n";
        } else {
            for(int j = 0; j < size; j++) {
                if(element[j] != '0'){
                    element[j] = '0';
                    quantidade++;
                    posicaoRemovidos.push_back(j+1);
                }
            }

            cout << quantidade << endl;
            for (int i = 0; i < posicaoRemovidos.size(); i++)
                cout << posicaoRemovidos[i] << endl;
        }

        tests--;
    }

    return 0;
}