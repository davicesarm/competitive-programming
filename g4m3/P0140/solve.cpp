#include <bits/stdc++.h>

using namespace std;

bool is_valid(int r, int c, int N) {
    return r >= 0 && r < N && c >= 0 && c < 2;
}

int main() {
    int N; cin >> N;

    vector<vector<int>> grid(N, vector<int>(2));
    vector<pair<int, int>> holes;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 0) {
                holes.push_back({i, j});
            }
        }
    }

    long long max_value = 0;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (auto start_hole : holes) {
        long long current_hole_value = 0;
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(N, vector<bool>(2, false));

        q.push(start_hole);
        visited[start_hole.first][start_hole.second] = true;

        while (!q.empty()) {
            pair<int, int> current_cell = q.front();
            q.pop();

            int r = current_cell.first;
            int c = current_cell.second;

            for (int i = 0; i < 4; ++i) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (is_valid(nr, nc, N) && !visited[nr][nc] && grid[nr][nc] != 0) {
                    visited[nr][nc] = true;
                    current_hole_value += grid[nr][nc];
                    q.push({nr, nc});
                }
            }
        }

        max_value = max(current_hole_value, max_value);
    }

    cout << max_value << endl;

    return 0;
}