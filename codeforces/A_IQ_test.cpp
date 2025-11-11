#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

/* 
1 2 2
2 1 2
2 2 1
*/

int main() {
    fastio;
    
    int n; cin >> n;
    vector<int> v(n);
    unordered_map<int, int> m;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v[i] = x;
        m[x % 2]++;
    }

    for (int i = 0; i < n; i++) {
        if (m[v[i] % 2] == 1) {
            cout << i + 1 << "\n";
            break;
        }
    }
    
    return 0;
}