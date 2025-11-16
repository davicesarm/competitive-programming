#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define int long long
typedef pair<int,int> pii;

vector<bool> crivo(int n) {
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    return is_prime;
}


signed main() {
    fastio;
    vector<bool> is_prime = crivo(1e6);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int raiz = sqrt((double)x);

        if ((raiz * raiz == x) && is_prime[raiz]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}