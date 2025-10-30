#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> m;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m[x]++;
        if (m[x] >= 3) ans = x;
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