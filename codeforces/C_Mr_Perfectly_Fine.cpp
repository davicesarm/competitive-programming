#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    
    int s1 = -1;
    int s2 = -1;
    int s3 = INT_MAX;

    for (int i = 0; i < n; i++) {
        int m;
        string b;
        cin >> m >> b;
        if (b[0] == '1') {
            if (s1 < 0) s1 = m;
            else s1 = min(s1, m);
        }

        if (b[1] == '1') {
            if (s2 < 0) s2 = m;
            else s2 = min(s2, m);
        }

        if (b[0] == '1' && b[1] == '1') {
            s3 = min(s3, m);
        }
    }

    if (s1 < 0 || s2 < 0) {
        cout << "-1\n";
        return;
    }

    cout << min(s2 + s1, s3) << "\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}