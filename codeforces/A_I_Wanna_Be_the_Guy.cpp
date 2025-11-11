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
    set<int> st;
    int p; cin >> p;
    for (int i = 0; i < p; i++) {
        int pi; cin >> pi;
        st.insert(pi);
    }
    
    cin >> p;
    for (int i = 0; i < p; i++) {
        int pi; cin >> pi;
        st.insert(pi);
    }

    if (st.size() != n) {
        cout << "Oh, my keyboard!\n";
    } else {
        cout << "I become the guy.\n";
    }
    return 0;
}