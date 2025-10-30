#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int& x : v) cin >> x;

    int l = n, r = 0;
    for (int i = 0; i < n; i++) {
        if (v[i]) {
            l = min(i, l);
            r = max(r, i);
        }
    }

    if (k < (r - l + 1)) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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