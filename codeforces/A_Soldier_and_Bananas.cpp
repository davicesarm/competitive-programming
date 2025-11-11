#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    int k, n, w;
    cin >> k >> n >> w;

    int cost = 0;
    for (int i = 1; i <= w; i++) {
        cost += k * i;
    }

    cout << max(0, cost - n) << "\n";
    
    
    return 0;
}