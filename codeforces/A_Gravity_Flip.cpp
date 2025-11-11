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
    sort(all(v));
    for (int i = 0; i < n; i++) cout << v[i] << " \n"[i == n - 1];
    
    return 0;
}