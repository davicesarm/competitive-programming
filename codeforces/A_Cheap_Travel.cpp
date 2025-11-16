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
    
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans = n * a;

    int awidhahaw = min(ans, (n / m) * b);
    if (n % m != 0) {
        awidhahaw += min(n % m * a, b);
    }

    cout << min(ans, awidhahaw) << "\n";

    return 0;
}