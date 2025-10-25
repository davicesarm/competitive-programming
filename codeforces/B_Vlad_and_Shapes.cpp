#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    vector<string> m(n);
    for (auto& x : m) cin >> x;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (m[i][j] != '1') continue;
            if (m[i][j + 1] == '1' && m[i + 1][j] == '1') {
                cout << "SQUARE\n";
            } else {
                cout << "TRIANGLE\n";
            }
            return;
        }
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