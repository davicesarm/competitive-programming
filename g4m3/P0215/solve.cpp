#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;
    vector<int> v(n), prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        prefix[i + 1] = prefix[i] ^ v[i];
    }

    int ans = 0;

    for (int i = 0; i <= n - m; i++) {
        int xor_val = prefix[i + m] ^ prefix[i];
        ans = max(ans, xor_val);
    }

    cout << ans << '\n';
    return 0;
}