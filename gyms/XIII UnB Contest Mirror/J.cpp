#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    int celulas = n*m;

    if (celulas % 2 == 0)
        cout << 'P' << endl;
    else
        cout << 'W' << endl;

    return 0;
}