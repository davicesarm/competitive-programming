#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;


void solve() {
    int n; cin >> n;
    set<ll> s;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        s.insert(x);
    }

    for (ll x = 2; x <= 1000; x++) {
        for (auto v : s) {
            if (gcd(v, x) == 1) {
                cout << x << "\n";
                return;
            }
        }
    }

    cout << "-1\n";
   
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}