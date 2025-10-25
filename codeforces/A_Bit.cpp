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
    while (n--) {
       string s; cin >> s;
       if (s[0] == '+' || s[2] == '+') {
        ans++;
       } else if (s[0] == '-' || s[2] == '-') {
        ans--;
       }
    }

    cout << ans << "\n";
    return 0;
}