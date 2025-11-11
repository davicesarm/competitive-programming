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
    set<char> st;
    for (auto x : s) st.insert(x);
    if (sz(st) & 1) {
        cout << "IGNORE HIM!\n";
    } else {
        cout << "CHAT WITH HER!\n";
    }
    
    return 0;
}