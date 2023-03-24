#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int x = 0, y = 0;
        bool res = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') y++;
            if (s[i] == 'R') x++;
            if (s[i] == 'D') y--;
            if (s[i] == 'L') x--;

            if (x == 1 && y == 1) {res = true; break;}
        }
        if (res) cout << "YES\n";
        else cout << "NO\n";
    }
}