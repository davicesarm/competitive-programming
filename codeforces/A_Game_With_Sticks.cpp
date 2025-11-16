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
    
    int a, b;
    cin >> a >> b;
    if (min(a, b) % 2 == 0) {
        cout << "Malvika\n";
    } else {
        cout << "Akshat\n";
    }
    
    
    return 0;
}