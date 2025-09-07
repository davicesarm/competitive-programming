#include <bits/stdc++.h>
using namespace std;

int dfs(int node, vector<bool>& vis, vector<vector<int>>& g) {
    vis[node] = true;
    int i = 0;
    for (int x : g[node]) {
        if (vis[x]) return -2e9;
        i = max(i, dfs(x, vis, g));
    }

    vis[node] = false;
    return i + 1;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g_out(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g_out[v].push_back(u);
    }

    vector<bool> vis(n + 1);
    vector<int> viagens(n + 1);
    bool possivel = true;
    for (int i = 1; i <= n; i++) {
        int viagem = dfs(i, vis, g_out);

        if (viagem <= 0) {
            possivel = false;
            break;
        }

        viagens[i] = viagem;
    }

    if (!possivel) {
        cout << "NO\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << viagens[i] << " ";
    }

    cout << "\n";
}