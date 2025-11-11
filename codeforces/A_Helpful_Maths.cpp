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
    vector<int> v;
    for (auto x : s) {
        if (x != '+') {
            v.push_back(x - '0');
        }
    }

    int n = sz(v);

    sort(all(v));
    cout << v[0];
    for (int i = 1; i < n; i++) 
        cout << "+" << v[i];
    cout << "\n";

    return 0;
}