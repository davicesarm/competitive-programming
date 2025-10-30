#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int i = 0, j = n - 1;
    while (i < j) {
        if (s[i] == s[j]) {
            break;
        }
        i++;
        j--;
    } 

    cout << (j - i) + 1 << "\n";
}

int main() {
    fastio;
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}