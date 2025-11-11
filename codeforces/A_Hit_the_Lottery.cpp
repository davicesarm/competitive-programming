#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

// 60

int main() {
    fastio;
    
    int n; cin >> n;
    int ans = 0;
    
    ans += n / 100;
    int resto = n % 100;

    ans += resto / 20;
    resto %= 20;
    
    ans += resto / 10;
    resto %= 10;
    
    ans += resto / 5;
    resto %= 5;
    
    ans += resto;
    cout << ans << "\n";
    
    return 0;
}