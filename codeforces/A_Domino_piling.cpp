#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    int m, n;
    cin >> m >> n;
    
    int ans = (n / 2) * m;
    if (n % 2 != 0) {
        ans += m / 2;
    }

    cout << ans << "\n";
    
    return 0;
}