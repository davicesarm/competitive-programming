#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

/* 
1 2

1 3 4 5 6 7 2

          v  
1 3 4 5 6 7 2
        v
1 3 4 5 6 2
      v
1 3 4 5 2

*/

void solve() {
    int n; cin >> n;
    cout << 1 << " ";
    for (int i = 3; i <= n; i++) cout << i << " ";
    cout << 2 << "\n";    
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}