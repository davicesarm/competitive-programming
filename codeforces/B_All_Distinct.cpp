#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

/* 
1 1 1 1 1 2 2 2 8 9
1 1 1 1 2 2 2 3 3 8 9
1   2  3 8 9
1 1 2 3 3 8 9

contar qtd de qtd pares

1 1 2 2 2 3 3 3 3 4 5 5 5 5 6

se qtd pares dor impar -> tamanho do map -1



1 3   4  5 6


*/

void solve() {
    int n; cin >> n;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m[x]++;
    }
    
    int pares = 0;
    for (auto [k, v] : m) {
        if (v % 2 == 0) pares++;
    }

    if (pares % 2 == 0) {
        cout << m.size() << "\n"; 
    } else {
        cout << m.size() - 1 << "\n";
    }
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}