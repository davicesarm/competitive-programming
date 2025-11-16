#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    int n; cin >> n;
    
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m[x]++;
    }

    int ans = m[4];

    ans += m[3];
    int usados_1 = min(m[3], m[1]);
    m[1] -= usados_1;
    m[3] = 0;

    ans += m[2] / 2;
    m[2] %= 2;

    if (m[2] == 1) {
        ans += 1;
        m[1] = max(0, m[1] - 2);
    }
    
    if (m[1] > 0) {
        ans += (m[1] + 3) / 4;
    }

    cout << ans << "\n";
    
    return 0;
}