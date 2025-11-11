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
    
    char cur = s[0];
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == cur) {
            ans++;
        } else {
            cur = s[i];
        }
    }

    cout << ans << "\n";

}

int main() {
    fastio;
    solve();
    return 0;
}