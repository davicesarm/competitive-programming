#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n, k;
    cin >> n >> k;
    string s; cin >> s;

    int ans = 0;
    int i = 0;
    while (i < n) {
        if (s[i] != 'B') {
            i++;
            continue;
        }

        int j;

        for (j = i; j < k + i && j < n; j++) {
            if (s[j] == 'B') {
                s[j] = 'W';
            }
        }
        i = j;
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