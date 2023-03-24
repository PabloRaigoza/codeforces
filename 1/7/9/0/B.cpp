#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int n, s, r; cin >> n >> s >> r;

        int mx = s - r;
        int total = s - mx - n + 1;
        cout << s - r << " ";
        for (int i = 1; i < n; i++) {
            int cur;
            if (total - (mx - 1) >= 0) {
                cur = mx - 1; total -= mx - 1;
            } else {
                cur = total; total -= total;
            }
            cout << cur+1 << " ";
        } cout << "\n";
    }
}