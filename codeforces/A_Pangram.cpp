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
    string s; cin >> s;
    set<char> st;
    for (char c : s) st.insert(toupper(c));
    if (st.size() < 26) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
   
    return 0;
}