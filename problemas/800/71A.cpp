#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    string word;

    for (int i = 0; i < n; i++) {
        cin >> word;
        if (word.length() > 10) {
            char first = word[0];
            char last = word[word.length() - 1];
            int length = word.length() - 2;

            cout << first << length << last << endl; 
        } else {
            cout << word << endl; 
        }
    }
    
    return 0;
}