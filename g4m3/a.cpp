// O(n^2)

#include <bits/stdc++.h>

using namespace std;

#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) + (m) - 1) / (m))
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
constexpr int INF = 1 << 30, Mod = 1e9 + 7;
constexpr ll LINF = 1LL << 62;
#define PI acos(-1)
template < typename T = int > using Pair = pair < T, T >;
vector < string > RET = {"NO", "YES"};

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; 
    return out;
}

// SOLUÇÃO --------------------------- :)

void solve(){
    int n, t;
    cin >> n >> t;
    vector<vector<bool>> v(n, vector<bool>(n, false));

    int ocupados = 0;
    while (t--) {
        int x, y, r;
        cin >> x >> y >> r;

        int min_y = max(0, y - r);
        int max_y = min(n - 1, y + r);
        int min_x = max(0, x - r);
        int max_x = min(n - 1, x + r);

        for (int i = min_y; i <= max_y; i++) {
            for (int j = min_x; j <= max_x; j++) {
                ll dy = (ll) y - i;
                ll dx = (ll) x - j;
                ll r2 = (ll) r * r;

                if (dy * dy + dx * dx > r2) {
                    continue;
                }
                
                if (!v[i][j]) {
                    ocupados++;
                    v[i][j] = 1;
                }
            }
        }
    }
    cout << (n * n) - ocupados << "\n";

}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    solve();

    return 0;
}