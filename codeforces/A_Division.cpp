#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int x; cin >> x;
    int div;
    if (x <= 1399) {
        div = 4;
    } else if (x <= 1599) {
        div = 3;
    } else if (x <= 1899) {
        div = 2;
    } else {
        div = 1;
    }
    cout << "Division " << div << "\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}