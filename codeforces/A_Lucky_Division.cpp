#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    vector<int> div = {4, 7, 47, 74, 444, 447, 474, 744, 477, 747, 774, 777};
    int n; cin >> n;
    for (int x: div) {
        if (n % x == 0) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
     
    
    
    return 0;
}