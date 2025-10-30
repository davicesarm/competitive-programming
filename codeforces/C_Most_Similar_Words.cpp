#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int op(string a, string b) {
    int diff = 0;
    for (int i = 0; i < a.size(); i++) {
        diff += abs(a[i] - b[i]);
    }
    return diff;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto& x : v) cin >> x;

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = min(ans, op(v[i],  v[j]));
        }
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