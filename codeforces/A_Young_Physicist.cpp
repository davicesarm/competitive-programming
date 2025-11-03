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
    
    
    int x, y, z;
    cin >> x >> y >> z;
    n--;
    
    while (n--) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }
    if (x == 0 && y == 0 && z == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}