#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    string a, b;
    cin >> a >> b;
    int n = a.length();

    string ans = "";
    for (int i = 0; i < n; i++) {
        ans += to_string(a[i] ^ b[i]);
    }

    cout << ans << "\n";
    
    return 0;
}