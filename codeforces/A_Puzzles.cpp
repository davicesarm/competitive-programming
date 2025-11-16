#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define f(i,b,e) for (int i = (b);i < (e);++i)
#define sz(x) (int)(x).size()
#define int long long
typedef pair<int,int> pii;


signed main() {
    fastio;
    
    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (auto& x : v) cin >> x;
    
    sort(all(v));

    int l = 0, r = n - 1;

    int ans = v[n - 1];
    while (r < m) {
        ans = min(ans, v[r] - v[l]);
        l++, r++;
    }

    cout << ans << "\n";

    return 0;
}