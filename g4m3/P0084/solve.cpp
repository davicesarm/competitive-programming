#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, C;
    cin >> L >> C;
    vector<string> m(L);
    vector<pair<int, int>> s;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            char c; cin >> c;
            if (c == 'X') {
                s.push_back({i, j});
            }
            m[i] += c;
        }
    }
    
    int maxDist = -1;
    int qtd = 0;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (m[i][j] == '.') {
                int minDist = L + C;
                for (auto [x, y] : s) {
                    int dist = abs(i - x) + abs(j - y);
                    minDist = min(minDist, dist);
                }
                if (minDist > maxDist) {
                    maxDist = minDist;
                    qtd = 1;
                } else if (minDist == maxDist) {
                    qtd++;
                }
            }
        }
    }

    cout << maxDist << " " << qtd << endl;
    return 0;
}