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
    unordered_map<int, int> mp;
    vector<int> v(n);

    f (i, 0, n) {
        int x; cin >> x;
        v[i] = x;
        mp[x]++;
    }

    f (i, 0, n) {
        if (mp[v[i]] == 1) {
            cout << i + 1 << "\n";
        }
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