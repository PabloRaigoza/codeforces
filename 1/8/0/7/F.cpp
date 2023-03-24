#include <bits/stdc++.h>
using namespace std;

bool isHit(int i1, int j1, int i2, int j2, string dir) {
    int dx = i2 - i1;
    int dy = j2 - j1;
    if (dir == "DR") {
        if (i2 > i1 && j2 > j1 && abs(dx) == abs(dy)) return true;
    } else if (dir == "DL") {
        if (i2 > i1 && j1 > j2 && abs(dx) == abs(dy)) return true;
    } else if (dir == "UR") {
        if (i1 > i2 && j2 > j1 && abs(dx) == abs(dy)) return true;
    } else {
        if (i1 > i2 && j1 > j2 && abs(dx) == abs(dy)) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    // int t; cin >> t; while (t--) {
    //     int n, m; cin >> n >> m;
    //     int i1, j1, i2, j2; cin >> i1 > j1 >> i2 >> j2;
    //     string move; cin >> move;

    //     for (int i = 0; true; i++) {
    //         if (move == "DR") {
    //             if (m - i1 > n - j1) {

    //             }
    //         }
    //     }
    // }
    cout << isHit()
}