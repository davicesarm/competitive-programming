#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0;
    int r = 0;
    long long sum = 0;
    while (r < n) {
        if (sum > x) {
            sum -= v[l];
            l++;
        } else {
            sum += v[r];
            r++;
        }

        if (sum == x) {
            cout << "YES" << endl;
            return 0;
        }

    }

    cout << "NO" << endl;
    return 0;
}