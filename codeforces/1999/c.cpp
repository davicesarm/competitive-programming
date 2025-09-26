/*
https://codeforces.com/contest/1999/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

int n, s, m;

bool solve() {
    int c = 0;
    bool yes = false;
    while (n--) {
        int l, r;
        cin >> l >> r;
        
        if (l - c >= s)
            yes = true;

        c = r;
    }
    if (m - c >= s)
        yes = true;

    return yes;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> s >> m;
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
    return 0;
}
