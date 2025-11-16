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
    
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (auto& x : v) cin >> x;

    sort(all(v));

    double ans = 0.0;
    ans = max(ans, (double)v[0] - 0);
    ans = max(ans, (double)l - v[n - 1]);

    f (i, 0, n - 1) {
        ans = max(ans, (v[i + 1] - v[i]) / 2.0);
    }

    cout << fixed << setprecision(10) << ans << "\n";
    return 0;
}