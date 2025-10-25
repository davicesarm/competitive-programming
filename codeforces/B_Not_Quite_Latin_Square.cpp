#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    for (int i = 0; i < 3; i++) {
        string s; cin >> s;
        set<char> sc;
        bool line = false;
        for (char x : s) {
            if (x == '?'){
                line = true;
            } else sc.insert(x);
        }
        if (line)
            for (char c : "ABC") {
                if (sc.find(c) == sc.end()) {
                    cout << c << "\n";
                    break;
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