#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define f(i,b,e) for (int i = (b);i < (e);++i)
#define sz(x) (int)(x).size()
#define int long long
typedef pair<int,int> pii;

/* 

dp[i] = max(dp[i - a], dp[i - b], dp[i - c])

dp[29] = max(dp[29 - 12], dp[29, 7], dp[29 - 10])
dp[29 - 12 (17)] = max(dp[17 - 12], dp[17 - 7], dp[17 - 10])
dp[17 - 12 (5)] = 5 < a ; 5 < b ; 5 < c

dp[5] = -1

*/

signed main() {
    fastio;
    
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    vector<int> dp(n + 1, -1);
    
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i >= a && dp[i - a] != -1) {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }

        if (i >= b && dp[i - b] != -1) {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }

        if (i >= c && dp[i - c] != -1) {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }

    cout << dp[n] << "\n";

    return 0;
}