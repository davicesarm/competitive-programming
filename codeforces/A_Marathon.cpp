#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int arr[4];
    for (auto& x: arr) cin >> x;
    int ans = 0;
    for (int i = 1; i < 4; i++) {
        if (arr[i] > arr[0]) ans++;
    }

    cout << ans << "\n";

}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}