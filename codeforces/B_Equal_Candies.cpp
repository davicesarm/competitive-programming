#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    sort(all(v));
    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans += v[i] - v[0];
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