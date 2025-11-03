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
    
    int size = 0;
    while (size < 4) {
        n++;
        set<char> s;
        for (char c : to_string(n)) {
            s.insert(c);
        }
        size = sz(s);
    }
    
    cout << n << "\n";
    return 0;
}