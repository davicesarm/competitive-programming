#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int& x : v) cin >> x;

    for (int i = 0; i < n; i++) {
        int b;
        string s;
        cin >> b >> s;
        unordered_map<char, int> m;
        for (char c : s) {
            m[c]++;
        }

        if (m['D'] > m['U']) {
            cout << (v[i] + (m['D'] - m['U'])) % 10 << " ";
        } else {
            cout << (v[i] - (m['U'] - m['D']) + 10) % 10 << " ";
        }
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