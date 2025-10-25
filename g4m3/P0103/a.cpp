#include <bits/stdc++.h>
using namespace std;

int b, g, c;

int calc_g_linha(int x) {
    return static_cast<int>(ceil(static_cast<double>(x) + static_cast<double>(g) / (x + 1)));

}

void solve() {
    int l = 0, r = g;
    for (int i = 0 ; i < 100; i++) {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
    
        if (calc_g_linha(m1) < calc_g_linha(m2)) {
            r = m2;
        } else {
            l = m1;
        }
    }
    
    int min_x = l;
    int min_g_linha = calc_g_linha(min_x);
    while (min_x > 0 && calc_g_linha(min_x - 1) <= min_g_linha) {
        if (calc_g_linha(min_x - 1) < min_g_linha) {
            min_g_linha = calc_g_linha(min_x - 1);
        }
        min_x--;
    } 

    if (min_g_linha <= b) {
        cout << "WE CAN SAVE THE WORLD\n";
    } else {
        cout << "WE ARE DOOMED\n";
    }
    cout << min_x * c << "\n";
}


int main() {
    int t; cin >> t;

    while (t--) {
        cin >> b >> g >> c;
        solve();
    }
    return 0;
}