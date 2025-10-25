#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    vector<int> v(3);
    for (auto& x : v) cin >> x;
    sort(all(v));
    if (v[0] + v[1] == v[2]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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