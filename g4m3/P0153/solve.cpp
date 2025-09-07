#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;

	vector<vector<int>> g(n + 1, vector<int>());

	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	vector<bool> vis(n + 1, false);
	queue<pair<int, int>> q;

	bool tree = true;

	vis[1] = true;
	q.push({1, -1});

	while (!q.empty() && tree) {
		auto [v, parent] = q.front();
		q.pop();

		for (int x : g[v]) {
			if (!vis[x]) {
				vis[x] = true;
				q.push({x, v});
			} else if (x != parent) {
				tree = false;
				break;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			tree = false;
			break;
		}
	}

	cout << (tree ? "YES\n" : "NO\n");

	return 0;
}