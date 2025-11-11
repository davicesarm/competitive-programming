#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int ans = 0;
    ans = max(ans, a + b + c);
    ans = max(ans, a + b * c);
    ans = max(ans, a * b + c);
    ans = max(ans, a * b * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, (a + b) * c);

    cout << ans << "\n";
    
    return 0;
}