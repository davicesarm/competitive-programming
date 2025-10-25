#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    const int n = 10;
    vector<string> m(n);
    for (int i = 0; i < n; i++)
        cin >> m[i];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (m[i][j] == 'X') {
                int dist_x = min(j, n - 1 - j) + 1;
                int dist_y = min(i, n - 1 - i) + 1;
                ans += min(dist_x, dist_y);
            }
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