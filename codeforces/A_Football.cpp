#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    fastio;
    
    string s; cin >> s;

    int c = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            c = 1;
        } else {
            c++;
        }
        
        if (c >= 7) {
            cout << "YES\n";
            return 0;
        } 
    }

    cout << "NO\n";

    return 0;
}