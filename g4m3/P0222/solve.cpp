#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& g, vector<bool>& vis) {
    vis[node] = true;
    for (int x : g[node]) {
        if (!vis[x]) {
            dfs(x, g, vis);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<bool> vis(n + 1, false);
    int grupos = 0;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i, g, vis);
            grupos++;
        }
    }

    cout << grupos << endl;

    return 0;
}