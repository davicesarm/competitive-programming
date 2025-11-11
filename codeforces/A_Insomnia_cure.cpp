#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    vector<int> v(4);
    for (int& x : v) cin >> x;
    int d; cin >> d;


    int ans = 0;
    for (int i = 1; i <= d; i++) {
        for (int x : v) {
            if (i % x == 0) {
                ans++;
                break;
            }
        }
    }
    cout << ans << "\n";
    
    return 0;
}