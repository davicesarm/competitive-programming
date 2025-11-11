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
    int ans = 0;

    int c = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > 0 && c < 0) {
            c = x;
        } else {
            c += x;
        }

        if (c < 0) {
            ans++;
        }

    }
    
    cout << ans << "\n";

    return 0;
}