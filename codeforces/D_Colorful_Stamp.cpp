#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

/* 
WWB

*/

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    unordered_map<char, int> m = {
        {'R', 0}, {'B', 0}, {'W', 0}
    };

    for (int i = 0; i < n; i++) {
        m[s[i]]++;

        if (m['W'] == n) {
            cout << "YES\n";
            return;
        }

        if ((s[i] == 'W' || i == n - 1 ) && !(m['R'] == 0 && m['B'] == 0)) {
            if (m['R'] == 0 || m['B'] == 0) {
                cout << "NO\n";
                return;
            } else {
                m['R'] = 0, m['B'] = 0;
            }
        }
    }

    cout << "YES\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}