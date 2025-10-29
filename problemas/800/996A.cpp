#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s = 0;
    while (n > 0) {
        if (n < 5) {
            n -= 1;
            s++;
        }
        else if (n < 10) {
            n -= 5;
            s++;
        }
        else if (n < 20) {
            n -= 10;
            s++;
        }
        else if (n < 100) {
            n -= 20;
            s++;
        }
        else if (n >= 100) {
            n -= 100;
            s++;
        }
    }

    cout << s << endl;

    return 0;
}