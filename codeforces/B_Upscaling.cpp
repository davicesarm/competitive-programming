#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << (j % 2 == 0 ? "##" : "..");
            }
            cout << "\n";
            for (int j = 0; j < n; j++) {
                cout << (j % 2 == 0 ? "##" : "..");
            }
        } else {
            for (int j = 0; j < n; j++) {
                cout << (j % 2 == 0 ? ".." : "##");
            }
            cout << "\n";
            for (int j = 0; j < n; j++) {
                cout << (j % 2 == 0 ? ".." : "##");
            }
        }
        
        cout << "\n";
    }

}

int main() {
    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}