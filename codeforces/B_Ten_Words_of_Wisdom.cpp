#include <bits/stdc++.h>
using namespace std;
    
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;
    
void solve() {
    int n; cin >> n;
    int maior = -1;
    int indice = -1;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        if (a <= 10) {
            if (b > maior) {
                maior = b;
                indice = i;
            }
        }
    }
    cout << indice << "\n";
}
    
int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
} 