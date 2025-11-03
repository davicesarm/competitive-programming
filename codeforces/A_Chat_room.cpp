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
    string hello = "hello";

    int i = 0;
    for (char c : s) {
        if (hello[i] == c) {
            i++;
        }

        if (i == hello.length()) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    
    
    return 0;
}