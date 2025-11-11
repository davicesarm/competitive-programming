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
    vector<int> v(n);
    int min = INT_MAX;
    int min_i = -1;
    int max = -1;
    int max_i = -1;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        
        if (x <= min) {
            min = x;
            min_i = i;
        }
        if (x > max) {
            max = x;
            max_i = i;
        }
    }

    int ans = 0;
    ans += n - (min_i + 1);
    if (max_i > min_i) ans--;
    ans += max_i;
    cout << ans << "\n";

    return 0;
}