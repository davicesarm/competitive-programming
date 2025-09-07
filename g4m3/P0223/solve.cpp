#include <bits/stdc++.h>
using namespace std;

int max_diff = -2e9;
int ans = -1;

int dfs(int node, vector<bool>& saudavel, vector<vector<int>>& g) {
    int i = saudavel[node] ? -1 : 1;
    for (int u : g[node]) {
        i += dfs(u, saudavel, g);
    }

    if (i > max_diff) {
        max_diff = i;
        ans = node;
    } 

    else if (i == max_diff) {
        ans = min(ans, node);
    }

    return i;
}


int main() {
    int n; cin >> n;
    
    vector<vector<int>> g(n + 1);
    vector<bool> saudavel(n + 1, true);

    for (int v = 2; v <= n; v++) {
        int u; cin >> u;
        g[u].push_back(v);
    }

    for (int i = 2; i <= n; i++) {
        int x; cin >> x;
        if (x == 2) {
            saudavel[i] = false;
        }
    }
    for (int u : g[1]) {
        dfs(u, saudavel, g);
    }
    cout << ans << "\n";
    return 0;
}