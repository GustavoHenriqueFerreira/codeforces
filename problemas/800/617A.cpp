#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;

    cin >> x;

    if (x <= 5) {
        cout << 1 << endl;
    }
    else {
        int movs = x / 5;
    
        if (x % 5 != 0) {
            movs++;
        }
    
        cout << movs << endl;
    }

    return 0;
}