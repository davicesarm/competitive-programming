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
    
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    sort(all(v));
    
    int maior = v[n - 1];
    int ans = 0;
    f (i, 0, n - 1) {
        ans += maior - v[i];
    }

    cout << ans << "\n";
    return 0;
}