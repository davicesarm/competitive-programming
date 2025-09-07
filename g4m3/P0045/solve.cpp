#include <bits/stdc++.h>
using namespace std;

int countBombs(int x, int y, vector<vector<bool>> &m) {
    int bombs = 0 ;

    for (int i = -1; i < 2; i++) {
        for (int j = -1; j < 2; j++) {
            if (x+i >= 0 && x+i < m.size() && y+j >= 0 && y+j < m[0].size()) {
                if (m[x+i][y+j]) {
                    bombs++;
                }
            }
        }
    }

    return bombs;
}

bool solve(vector<vector<bool>> &m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            if (countBombs(i, j, m) > 4) {
                return false;
            }
        }
    }
    return true;
}


int main() {
    int d, q;
    cin >> d >> q;
    vector<vector<bool>> m(d, vector<bool>(d));

    bool bombAlreadyPlaced = false;

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;

        if (m[x][y]) bombAlreadyPlaced = true;
        m[x][y] = 1;
    }

    cout << (solve(m) && !bombAlreadyPlaced ? "True" : "False") << "\n";
    

    return 0;
}