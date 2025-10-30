#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= b[i]) {
            ans += a[i] - b[i];
        }
    }

    cout << ans + 1 << "\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}