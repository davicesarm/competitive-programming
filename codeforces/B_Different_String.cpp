#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        int x;
        if (n == 2) x = n / 2;
        else {
            x = n / 2;
            if (n % 2 == 0) x--;
        }
 
        string snew =  s.substr(x) + s.substr(0, x);      
 
        if (s != snew) {
            cout << "YES\n";
            cout << snew << "\n";
        } else {
            cout << "NO\n";
        }
 
    }
 
    return 0;
}