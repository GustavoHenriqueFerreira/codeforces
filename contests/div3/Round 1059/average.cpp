#include <iostream>
using namespace std;

int main() {
    int tests, size;

    cin >> tests;

    while (tests > 0) {
        cin >> size;
        int high = 0;
        for (int i = 0; i < size; i++) {
            int element = 0;
            cin >> element;
            if (element > high) {
                high = element;
            }
        }

        cout << high << endl;

        tests--;
    }

    return 0;
}