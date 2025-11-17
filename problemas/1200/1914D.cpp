#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<long long> a (n);
    vector<long long> b (n);
    vector<long long> c (n);
    long long soma = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<long long> copia = a;
    sort(copia.rbegin(), copia.rend());
    auto ita1 = find(a.begin(), a.end(), copia[0]);
    auto ita2 = find(a.begin(), a.end(), copia[1]);
    auto ita3 = find(a.begin(), a.end(), copia[2]);
    pair<int, long long> max1A = {(int)distance(a.begin(), ita1), copia[0]};
    pair<int, long long> max2A = {(int)distance(a.begin(), ita2), copia[1]};
    pair<int, long long> max3A = {(int)distance(a.begin(), ita3), copia[2]};
    pair<int, long long> maxA = {};
    if (max1A > max2A && max1A > max3A)
        maxA = {max1A.first, max1A.second};
    else if (max2A > max1A && max2A > max3A) 
        maxA = {max2A.first, max2A.second};
    else 
        maxA = {max3A.first, max3A.second};

    vector<long long> maioresA = {max1A.second, max2A.second, max3A.second};
    sort(maioresA.begin(), maioresA.end());

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    copia = b;
    sort(copia.rbegin(), copia.rend());
    auto itb1 = find(b.begin(), b.end(), copia[0]);
    auto itb2 = find(b.begin(), b.end(), copia[1]);
    auto itb3 = find(b.begin(), b.end(), copia[2]);
    pair<int, long long> max1B = {(int)distance(b.begin(), itb1), copia[0]};
    pair<int, long long> max2B = {(int)distance(b.begin(), itb2), copia[1]};
    pair<int, long long> max3B = {(int)distance(b.begin(), itb3), copia[2]};
    pair<int, long long> maxB = {};
    if (max1B > max2B && max1B > max3B)
        maxB = {max1B.first, max1B.second};
    else if (max2B > max1B && max2B > max3B) 
        maxB = {max2B.first, max2B.second};
    else 
        maxB = {max3B.first, max3B.second};
    
    vector<long long> maioresB = {max1B.second, max2B.second, max3B.second};
    sort(maioresB.begin(), maioresB.end());

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    copia = c;
    sort(copia.rbegin(), copia.rend());
    auto itc1 = find(c.begin(), c.end(), copia[0]);
    auto itc2 = find(c.begin(), c.end(), copia[1]);
    auto itc3 = find(c.begin(), c.end(), copia[2]);
    pair<int, long long> max1C = {(int)distance(c.begin(), itc1), copia[0]};
    pair<int, long long> max2C = {(int)distance(c.begin(), itc2), copia[1]};
    pair<int, long long> max3C = {(int)distance(c.begin(), itc3), copia[2]};
    pair<int, long long> maxC = {};
    if (max1C > max2C && max1C > max3C)
        maxC = {max1C.first, max1C.second};
    else if (max2C > max1C && max2C > max3C) 
        maxC = {max2C.first, max2C.second};
    else 
        maxC = {max3C.first, max3C.second};
    
    vector<long long> maioresC = {max1C.second, max2C.second, max3C.second};
    sort(maioresC.begin(), maioresC.end());

    if (maxA.first != maxB.first && maxA.first != maxC.first && maxC.first != maxB.first) 
        soma = maxA.second+maxB.second+maxC.second;
    else {
        if (maxA.first == maxB.first) {
            soma = maxC.second;
            long long maxAB = max(maxA.second, maxB.second);
            soma += maxAB;
            bool maiorA = (maxAB == maxA.second);

            if (maiorA) {
                // procura próximo valor de B com índice diferente
                for (auto val : maioresB) {
                    auto it = find(b.begin(), b.end(), val);
                    if (distance(b.begin(), it) != maxA.first && distance(b.begin(), it) != maxC.first) {
                        soma += val;
                        break;
                    }
                }
            } else {
                // procura próximo valor de A com índice diferente
                for (auto val : maioresA) {
                    auto it = find(a.begin(), a.end(), val);
                    if (distance(a.begin(), it) != maxB.first && distance(a.begin(), it) != maxC.first) {
                        soma += val;
                        break;
                    }
                }
            }
        }
        else if (maxA.first == maxC.first) {
            soma = maxB.second;
            long long maxAC = max(maxA.second, maxC.second);
            soma += maxAC;
            bool maiorA = (maxAC == maxA.second);

            if (maiorA) {
                for (auto val : maioresC) {
                    auto it = find(c.begin(), c.end(), val);
                    if (distance(c.begin(), it) != maxA.first && distance(c.begin(), it) != maxB.first) {
                        soma += val;
                        break;
                    }
                }
            } else {
                for (auto val : maioresA) {
                    auto it = find(a.begin(), a.end(), val);
                    if (distance(a.begin(), it) != maxC.first && distance(a.begin(), it) != maxB.first) {
                        soma += val;
                        break;
                    }
                }
            }
        }
        else if (maxB.first == maxC.first) {
            soma = maxA.second;
            long long maxBC = max(maxB.second, maxC.second);
            soma += maxBC;
            bool maiorB = (maxBC == maxB.second);

            if (maiorB) {
                for (auto val : maioresC) {
                    auto it = find(c.begin(), c.end(), val);
                    if (distance(c.begin(), it) != maxB.first && distance(c.begin(), it) != maxA.first) {
                        soma += val;
                        break;
                    }
                }
            } else {
                for (auto val : maioresB) {
                    auto it = find(b.begin(), b.end(), val);
                    if (distance(b.begin(), it) != maxC.first && distance(b.begin(), it) != maxA.first) {
                        soma += val;
                        break;
                    }
                }
            }
        }   
    }

    cout << soma << endl;
    // cout << "(" << max1A.first << ", " << max1A.second << ") "
    //  << "(" << max1B.first << ", " << max1B.second << ") "
    //  << "(" << max1C.first << ", " << max1C.second << ")\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}