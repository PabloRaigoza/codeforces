#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        long long l, r, x; cin >> l >> r >> x;
        long long cur, end; cin >> cur >> end;



        if (cur == end) {
            cout << "0\n";
        } else if (abs(cur - end) >= x) {
            cout << "1\n";
        } else if ( (abs(cur-l) >= x && abs(l-end) >= x) or (abs(cur-r) >= x && abs(r-end) >= x) ) {
            cout << "2\n";
        } else if (abs(cur-l) >= x && abs(l-r) >= x && abs(r-end) >= x) {
            cout << "3\n";
        } else if (abs(cur-r) >= x && abs(l-r) >= x && abs(l-end) >= x) {
            cout << "3\n";
        } else cout << "-1\n";
    }
}