#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    set<char> set_s;

    int ans = 0;
    for (char c : s) {
        if (set_s.find(c) == set_s.end()) {
            ans++;
        }
        set_s.insert(c);
        ans++;
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