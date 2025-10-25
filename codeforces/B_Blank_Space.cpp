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
    for (int& x : v) cin >> x;
    int ans = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            c++;
            ans = max(ans, c);
        } else {
            c = 0;
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