#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    queue<int> q;
    for (int i = 0; i < 3; i++) {
        int x; cin >> x;
        if (!q.empty() && q.front() == x) {
            q.pop();
        } else {
            q.push(x);
        }
    }

    cout << q.front() << "\n";
    
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}