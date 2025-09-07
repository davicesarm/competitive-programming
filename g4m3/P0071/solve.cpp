#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n); 
    queue<int> indices;
    
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a < 0) {
            indices.push(i);
        };
        arr[i] = a;
    }

    for (int i = 0; i < n; i++) {
        if (indices.size() % 2 != 0) {
            arr[i] *= -1;
        }
        if (!indices.empty() && (i == indices.front())) {
            indices.pop();
        }

        cout << arr[i] << " ";
    }    
    cout << endl;

    return 0;
}