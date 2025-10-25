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
    if (n != 5) {
        cout << "NO\n";
        return;
    }
    string timur = "Timur";
    unordered_map<char, int> m;
    for (char x : timur) m[x] = 1;

    for (char x : s) {
        if (m[x] <= 0) {
            cout << "NO\n";
            return;
        }

        m[x]--;
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