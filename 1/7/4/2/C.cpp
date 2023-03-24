#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        vector<vector<char>>  a(8,vector<char>(8));
        for (int i = 0; i < 8; i++) {
            string cur; cin >> cur;
            for (int j = 0; j < 8; j++) {
                a[i][j] = cur[j];
            }
        }

        bool resR = false;
        for (int i = 0; i < 8; i++) {
            bool b = true;
            for (int j = 0; j < 8; j++) {
                if (a[i][j] != 'R') {b = false; break;}
            }
            if (b) {resR = true; break;}
        }

        bool resB = false;
        for (int i = 0; i < 8; i++) {
            bool b = true;
            for (int j = 0; j < 8; j++) {
                if (a[j][i] != 'B') {b = true; break;}
            }
            if (b) {resB = true; break;}
        }

        if (resR) cout << "R\n";
        else cout << "B\n";

    }
}
