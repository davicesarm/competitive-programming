#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

/* 
1 1 1 1 1 1
18 14 10 6 2

*/

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int& x : v) cin >> x;
    
    int raz = v[0] - v[1];

    for (int i = 1; i <= n; i++) {
        if ((v[i - 1] / (n - i + 1)) != raz) {
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