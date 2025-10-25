#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    int k, r;
    cin >> k >> r;
    
    int ans = 1;
    int a = k;
    while (a % 10 != 0 && a % 10 != r) {
        a += k;
        ans++;
    }
    cout << ans << "\n";
    
    return 0;
}