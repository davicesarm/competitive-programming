#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

bool dfs(ll n, ll m) {
    if (n == m) return true;
    if (n < m || n % 3 != 0) return false;
    return dfs(n / 3, m) || dfs(2 * n / 3, m);
}

void solve() {
    ll n, m;
    cin >> n >> m;
    cout << (dfs(n, m) ? "YES\n" : "NO\n");
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}