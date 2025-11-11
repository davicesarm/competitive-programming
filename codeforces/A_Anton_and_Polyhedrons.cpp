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
    unordered_map<string, int> mp = {
        {"Icosahedron", 20},
        {"Cube", 6},
        {"Tetrahedron", 4},
        {"Octahedron", 8},
        {"Dodecahedron", 12}
    };

    int ans = 0;
    for (int i= 0; i < n; i++) {
        string s; cin >> s;
        ans += mp[s];
    }

    cout << ans << "\n";
    
    return 0;
}