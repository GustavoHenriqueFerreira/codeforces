#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    for (int x : a) cin >> x, (x == 1 ? s1++ : x == 2 ? s2++ : x == 3 ? s3++ : s4++);

    int taxis = s4;

    int pareados = min(s3, s1);
    taxis += s3;  
    s1 -= pareados;

    taxis += s2 / 2;
    s2 %= 2;

    if (s2 == 1) {
        taxis++;         
        s1 = max(0, s1 - 2); 
    }

    if (s1 > 0)
        taxis += (s1 + 3) / 4;

    cout << taxis << endl;
}
