#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i < n + 1; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> g(n + 1, vector<int>());

    for (int i = 1; i < n + 1; i++) {
        int cur = arr[i];

        for (int j = i + 1; j < n + 1; j++) {
            if (cur % arr[j] == 0 || arr[j] % cur == 0) {
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }

    int i = 3;
    while (i--) {
        int a, b;
        cin >> a >> b;

        if (find(g[a].begin(), g[a].end(), b) != g[a].end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    int x; cin >> x;

    for (int elem: g[x]) {
        cout << elem << " ";
    }
    cout << "\n";
}