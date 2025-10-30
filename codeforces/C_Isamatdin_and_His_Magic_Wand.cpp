#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    vector<ll> v(n);
    cin >> v[0];
    
    int parity = v[0] % 2;
    bool need = 0;

    for (int i = 1; i < n; i++) {
        cin >> v[i];
        if (parity != v[i] % 2) {
            need = true;
        }
    }

    if (need) {
        sort(all(v));
    }

    cout << v[0];
    for (int i = 1; i < n; i++) {
        cout << " " << v[i];
    }
    cout << "\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}