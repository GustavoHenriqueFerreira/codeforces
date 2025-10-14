#include <iostream>
using namespace std;

int main() {
    int weigth;

    cin >> weigth;

    int resto = weigth % 2;
    
    if (resto == 0 && weigth > 2) {
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }

    return 0;
}