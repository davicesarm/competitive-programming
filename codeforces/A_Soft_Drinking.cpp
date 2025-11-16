#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

/* 
l 1000 nl 4
slices 19 -> 1
p 90 np 3

*/

int main() {
    fastio;
    
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ml = k * l;
    int slices = c * d;
    int per = min(ml / nl, min(slices, p / np));
    cout << per / n << "\n";

    
    
    return 0;
}