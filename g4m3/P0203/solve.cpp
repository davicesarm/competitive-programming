#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, raiz, ant;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        raiz = sqrt(x);
        if ((x - pow(raiz, 2)) == 2 && (pow(raiz, 2) > 1)){
            cout << "YES\n";
            continue;
        }
        if (((x - pow(raiz, 2)) < 2) || (pow(raiz, 2) == x)){
            raiz--;
        }
        ant = raiz - 1;
        bool deu_bom = false;
        while (ant > 0 && raiz > 0){
            if ((pow(raiz, 2) + (pow(ant, 2) * 2)) < x){
                ant = raiz - 1;
                raiz--;
            }
            if (((pow(raiz, 2) + pow(ant, 2) * 2) == x) && pow(raiz, 2) > pow(ant, 2)){
                cout << "YES\n";
                deu_bom = true;
                break;
            }
            ant--;
        }
        
        if (!deu_bom){
            cout << "NO\n";
        }
    }
    return 0;
}