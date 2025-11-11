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
    unordered_map<string, int> mp;
    
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (mp.count(s) == 0) {
            cout << "OK\n";
        } else {
            int qt = mp[s];
            string ns = s + to_string(mp[s]);
            while (mp.count(ns) == 1){
                mp[s]++;
                ns = s + to_string(mp[s]);
            }
            mp[ns] = 1;
            cout << ns << "\n";
        }
        mp[s]++;
    }
    
    return 0;
}