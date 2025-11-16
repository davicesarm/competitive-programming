#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define f(i,b,e) for (int i = (b);i < (e);++i)
#define sz(x) (int)(x).size()
#define int long long
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    if (n % 3 == 0) {
        cout << "Second\n";
    } else {
        cout << "First\n";
    }

}

signed main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}