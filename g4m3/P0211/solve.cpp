#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, ans = 0;
    int r = -1;
    unordered_map<int, int> m;
    while (r < n) {
        if (m[1] > 0 && m[2] > 0 && m[3] > 0) {
            int size = r - l + 1;
            if (size < ans || ans == 0) ans = size;
            m[a[l]]--;
            l++;
        } else {
            r++;
            m[a[r]]++;
        }

        if (ans == 3) break;

    }
    cout << ans << endl;

    return 0;
}