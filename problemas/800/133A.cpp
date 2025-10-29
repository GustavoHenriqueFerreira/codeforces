#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string p = "NO";

    for (int i = 0; i < s.size(); i++) {
        // if (c == 'H' || c == 'Q' || c == '9'){
        if (s.find("H") != string::npos || s.find("Q") != string::npos || s.find("9") != string::npos){
            p = "YES";
        }
    }

    cout << p << endl;

    return 0;
}