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
    int a, b;
    cin >> a >> b;
    if (b == a) {
        cout << "0\n";
        return;
    }
    
    int ans = 0;
    if (b > a) {
        b -= a;
        ans += b / 10;
        ans += (b % 10 != 0);
    } else {
        a -= b;
        ans += a / 10;
        ans += (a % 10 != 0);
    }

    cout << ans << "\n";
}

signed main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}