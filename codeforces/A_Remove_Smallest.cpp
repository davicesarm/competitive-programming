#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define f(i,b,e) for (int i = (b);i < (e);++i)
#define sz(x) (int)(x).size()
#define int long long
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    
    sort(all(v));

    f (i, 0, n - 1) {
        if (v[i + 1] - v[i] > 1) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

signed main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}