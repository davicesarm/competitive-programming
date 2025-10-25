#include <bits/stdc++.h>
using namespace std;
    
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;
    
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c) {
        cout << "+\n";
    } else {
        cout << "-\n";
    }
}
    
int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}