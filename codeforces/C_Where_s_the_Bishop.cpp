#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

bool is_bishop(vector<string>& m, int i, int j) {
    return (
        m[i - 1][j - 1] == '#' &&
        m[i - 1][j + 1] == '#' && 
        m[i + 1][j - 1] == '#' &&
        m[i + 1][j + 1] == '#'
    );
}

void solve() {
    vector<string> m(8);
    for (auto& x : m) cin >> x;

    for (int i = 1; i < 7; i++) {
        for (int j = 1; j < 7; j++) {
            if (is_bishop(m, i, j)) {
                cout << i + 1 << " " << j + 1 << "\n";
                return;
            }
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