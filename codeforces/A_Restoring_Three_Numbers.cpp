#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;


int main() {
    fastio;
    int n = 4;

    vector<int> v(n);
    for (int& x : v) cin >> x;

    sort(rall(v));

    for (int i = 1; i < n; i++) {
        cout << v[0] - v[i] << " ";
    }
    cout << "\n";
    
    return 0;
}