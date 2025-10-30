#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int,int> pii;

vector<int> crivo(int n) {
    vector<bool> eh_primo(n + 1, true);
    eh_primo[0] = eh_primo[1] = false;

    vector<int> primos; 

    for (int p = 2; p * p <= n; p++) {
        if (eh_primo[p] == true) {
            for (int i = p * p; i <= n; i += p) {
                eh_primo[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++) {
        if (eh_primo[p] == true) {
            primos.push_back(p); 
        }
    }

    return primos;
}

int main() {
    fastio;
    
    vector<int> primos = crivo(3501 * 3501);
    
    while (true) {
        int n; cin >> n;
        if (n == 0) break;

        deque<int> q;
        for (int i = 1; i <= n; i++) {
            q.push_back(i);
        }

        int j = 0;
        while (q.size() > 1) {
            rotate(q.begin(), q.begin() + (primos[j] - 1) % q.size(), q.end());
            q.pop_front();
            j++;
        }
        cout << q.front() << "\n";

    }
    
    return 0;
}