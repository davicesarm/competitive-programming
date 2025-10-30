#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define for_i(n) for(int i = 0; i < n; i++)
#define for_j(n) for(int j = 0; j < n; j++)
#define for_k(n) for(int k = 0; k < n; k++)
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> m;
    for_i(n) {
        int x; cin >> x;
        m[x % 10]++;
    }

    for_i(10) {
        m[i]--;
        for_j(10) if(m[i] >= 0) {
            m[j]--;
            for_k(10) if(m[j] >= 0) {
                m[k]--;
                if (m[k] < 0) {
                    m[k]++; 
                    continue;
                }
                if ((i + j + k) % 10 == 3) {
                    cout << "YES\n";
                    return;
                }
                m[k]++;
            }
            m[j]++;
        }
        m[i]++;
    }
    cout << "NO\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}