#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    string original = "codeforces";
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (original[i] != s[i]) {
            ans++;
        }
    }

    cout << ans << endl;
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}