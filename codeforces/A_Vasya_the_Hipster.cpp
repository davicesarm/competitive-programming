#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define f(i,b,e) for (int i = (b);i < (e);++i)
#define sz(x) (int)(x).size()
#define int long long
typedef pair<int,int> pii;

signed main() {
    fastio;
    
    vector<int> v(2);
    cin >> v[0] >> v[1];
    sort(all(v));
    
    cout << v[0] << " ";

    cout << (v[1] - v[0]) / 2 << "\n";
    
    return 0;
}