#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    unordered_map<string, int> m;
    vector<vector<string>> v(3, vector<string>(n));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
            m[v[i][j]]++;
        }
    }

    for (int i = 0; i < 3; i++) {
        int points = 0;
        for (int j = 0; j < n; j++) {
            if (m[v[i][j]] == 2) {
                points++;
            } else if (m[v[i][j]] == 1) {
                points += 3;
            }
        }
        cout << points << " ";
    }
    cout << "\n";
    
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}