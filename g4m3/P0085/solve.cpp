#include <bits/stdc++.h>
using namespace std;
#define ll long long

// encontrar o inverso modular com Euclides Estendido
ll extended_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

ll mod_inv(ll a, ll m) {
    ll x, y;
    ll g = extended_gcd(a, m, x, y);
    if (g != 1) {
        return -1;
    }
    return (x % m + m) % m;
}

int main() {
	int MOD = 7907;
	ll n; cin >> n;
	ll s1 = (n % MOD) * ((n + 1) % MOD) % MOD;
	ll s2 = (n % MOD) * ((n - 1) % MOD);
	s2 = (s2 * mod_inv(2, MOD)) % MOD; // usando o inverso modular para dividir por 2
	cout << (s1 + s2) % MOD << endl;
	return 0;
}