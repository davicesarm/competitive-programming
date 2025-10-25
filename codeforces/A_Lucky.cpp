#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    string s; cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < 3; i++) {
        a += s[i] - '0';
    }
    for (int i = 3; i < s.length(); i++) {
        b += s[i] - '0';
    }

    if (a != b) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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