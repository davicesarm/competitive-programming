#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    int n, m;
    cin >> n >> m;

    bool r = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << "#";
            }
            cout << "\n";
            continue;
        }
        
        if (r) {
            for (int j = 0; j < m; j++) {
                if (j == m - 1) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        } else {
            for (int j = 0; j < m; j++) {
                if (j == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        cout << "\n";
        r = !r;
    }
    
    
    return 0;
}