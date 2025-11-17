#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string ab;

    cin >> ab;

    if (ab.size() == 2){
        if (ab[1] == '0')
            cout << -1 << endl;
        else 
            cout << ab[0] << " " << ab[1] << endl;
    }
    else if (ab.size() == 4)
        if (ab[1] == '0' && ab[2] == '0' && ab[3] == '0')
            cout << -1 << endl;
        else
            cout << ab[0] << ab[1] << " " << ab[2] << ab[3] << endl;
    else {
        if (ab[2] == '0' && ab[1] != '0') 
            cout << ab[0] << " " << ab[1] << ab[2] << endl;
        else if (ab[2] != '0' && ab[1] == '0' && ab[0] != '0')
            cout << ab[0] << ab[1] << " " << ab[2] << endl;
        else
            cout << -1 << endl;
    }


    return 0;
}