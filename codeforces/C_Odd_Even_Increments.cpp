#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;


bool same_parity(int a, int b) {
    return (a % 2 == 0 & b % 2 == 0 || a % 2 != 0 && b % 2 != 0);
} 

void solve() {
    int n; cin >> n;
    int a1, a2;
    cin >> a1 >> a2;

    bool ans = true;
    for (int i = 3; i <= n; i++) {
        int x; cin >> x;
        
        if (i % 2 == 0) {
            if (!same_parity(a2, x)) {
                ans = false;
            }
        } else {
            if (!same_parity(a1, x)) {
                ans = false;
            }
        }
    }    

    if (ans) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}