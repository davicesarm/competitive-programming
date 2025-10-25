#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    ll n, m, a;
    cin >> n >> m >> a;
    
    ll x = ceil((double) m / a);
    ll y = ceil((double) n / a);
    cout << x * y << "\n";
    return 0;
}