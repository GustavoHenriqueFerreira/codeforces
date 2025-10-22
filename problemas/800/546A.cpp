#include <bits/stdc++.h>
using namespace std;

int main(){
    int cost, dollars, want;

    cin >> cost >> dollars >> want;

    int res = 0;
    int total = 0;
    for (int i = 0; i < want; i++) {
        total = total + cost*(i+1);
    }

    if (total > dollars) {
        res = total - dollars;
    }

    cout << res << endl;

    return 0;
}