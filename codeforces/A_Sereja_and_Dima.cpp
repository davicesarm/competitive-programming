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
    for (auto& x : v) cin >> x;
    
    int l = 0, r = n - 1;
    int a = 0, b = 0;
    while (l <= r) {
        a += max(v[l], v[r]);
        if (v[l] > v[r]) l++;
        else r--;
        if (l > r) break;
        b += max(v[l], v[r]);
        if (v[l] > v[r]) l++;
        else r--;
    }
    cout << a << ' ' << b << '\n';
    
    return 0;
}