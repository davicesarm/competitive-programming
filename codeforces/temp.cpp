#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;

void solve2() {
    string s;
    int n;
    cin >> s >> n;
    int hour = stoi(s.substr(0, 2));
    int minute = stoi(s.substr(3, 2));

    int ans = 0;

    minute = (hour * 60 + minute) % n;
    for (int i = minute; i < 1440; i += n) {
        int min = i % 60;
        int hour = i / 60;
        string h = " ";
        if (hour < 10) {
            h+= "0";
        }
        h += to_string(hour);
        h += ':';
        if (min < 10) h += '0';
        h += to_string(min);

        string rev = h;
        reverse(all(rev));
        if (h == rev) {
            ans++;
        }
    }

    cout << ans << "\n";
}