#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int m, s; cin >> m >> s;

        int h = -1;
        int sum = 0;
        for (int i = 0; i < m; i++) {
            int cur; cin >> cur;
            if (cur > h) h = cur;
            sum+=cur;
        }
        bool res = false;
        for (int i = h; i < 100000; i++) {
            int cur = (i * (i + 1)) / 2;
            if (s == cur - sum ) {
                res = true; break;
            } else if (s < cur - sum) {
                res = false; break;
            }
        }

        if (res) cout << "YES\n";
        else cout << "NO\n";
    }
}