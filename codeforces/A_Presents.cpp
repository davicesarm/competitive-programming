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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        int p; cin >> p;
        v[p] = i;
    }

    for (int i = 1; i <= n; i++) cout << v[i] << " \n"[i == n];
    
    return 0;
}