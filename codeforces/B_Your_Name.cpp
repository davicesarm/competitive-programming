#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    unordered_map<char, int> m1, m2;
    
    for (int i = 0; i < n; i++) {
        m1[a[i]]++;
        m2[b[i]]++;
    }
    for (auto [k, v] : m1) {
        if (v != m2[k]) {
            cout << "NO\n";
            return;
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