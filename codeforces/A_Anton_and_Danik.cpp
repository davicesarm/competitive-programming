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
    unordered_map<char, int> mp;

    string s; cin >> s;
    for (char c : s) {
        mp[c]++;
    }

    if (mp['A'] > mp['D']) {
        cout << "Anton\n";
    } else if (mp['A'] < mp['D']) {
        cout << "Danik\n";
    } else {
        cout << "Friendship\n";
    }
    
    return 0;
}