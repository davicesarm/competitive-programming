#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

/* 
lados diferentes e diferença impar
ganha diff pontos

lados diferentes e diferença par
ganhar diff - 1 pontos

lados iguais e diferença par
ganha diff

lados iguais e diferença impar
ganha diff - 1
*/


void solve() {
    int n, m;
    cin >> n >> m;
    
    int ans = 0;
    int side = 0;
    int prevMin = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        int diff = a - prevMin;

        if (diff % 2 == 0) {
            if (b == side) {
                ans += diff;
            } else {
                ans += diff - 1;
            }
        } else {
            if (b == side) {
                ans += diff - 1;
            } else {
                ans += diff;
            }
        }

        prevMin = a;
        side = b;
    }

    if (m > prevMin) {
        int diff = m - prevMin;
        ans += diff;
    }


    cout << ans << "\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}