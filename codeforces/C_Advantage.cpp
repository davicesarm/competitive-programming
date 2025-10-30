#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    vector<ll> v1(n);
    vector<ll> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        v2[i] = v1[i];
    }
    sort(v2.rbegin(), v2.rend());
    for (int i = 0; i < n; i++) {
        if (v1[i] == v2[0]) {
            cout << v1[i] - v2[1] << " ";
        } else {
            cout << v1[i] - v2[0] << " ";
        }
    }
    cout << "\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}