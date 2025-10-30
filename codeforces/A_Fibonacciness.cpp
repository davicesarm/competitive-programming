#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

/* 
1 3 x 2 1
1 3 4 2 1
1 3 -1 2 1

*/

void solve() {
    vector<int> v(5);
    cin >> v[0] >> v[1] >> v[3] >> v[4];
    v[2] = v[0] + v[1];
    int fib = 1;
    for (int i = 3; i < 5; i++) {
        if (v[i - 2] + v[i - 1] == v[i]) {
            fib++;
        }
    }
    v[2] = v[3] - v[1];
    int fib2 = 1 + (v[4] == v[3] + v[2]);

    cout << max(fib, fib2) << "\n";

}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}