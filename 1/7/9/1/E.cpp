#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while(t--) {
        int n; cin >> n;
        bool zero = false;
        long long t = 0;
        long long mn;
        int neg = 0;
        for (int i = 0; i < n; i++) {
            long long cur; cin >> cur;
            if (cur < 0) neg++;
            cur = abs(cur);

            if (cur == 0) zero = true;
            if (t == 0) mn = cur;
            else mn = min(mn, cur);
            t += cur;
        }

        if (zero || neg % 2 == 0) {
            cout << t << "\n";
        } else {
            cout << t - 2*mn << "\n";
        }


    }
}