#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long slices;
        cin >> slices;
        long long hao = 0;

        while (slices > 0) {
            if (slices <= 2) {
                slices = 0;
            } else {
                if (slices % 3 == 0) {
                    hao += slices / 3;
                    slices = slices / 3;
                } else if (slices % 3 == 1) {
                    hao += slices / 3;
                    slices = slices / 3 + 1;
                }
                else if (slices % 3 == 2) {
                    hao += slices / 3;
                    slices = slices / 3 + 2;
                }
            }
        }

        cout << hao << endl;
    }
    return 0;
}