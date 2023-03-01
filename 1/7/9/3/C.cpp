#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            int cur; cin >> cur;
            v[j] = cur;
        }
        int li = 0; int ri = n-1;
        int lv = 1; int rv = n;
        // int inc = 0;
        int low = 1;
        int high = n;
        while (li < ri) {
            int good = 0;

            if (v[li] == low) {li++; low++; good++;}
            if (v[ri] == low) {ri--; low++; good++;}
            if (v[li] == high) {li++; high--; good++;}
            if (v[ri] == high) {ri--; high--; good++;}

            // if (v[li] == inc or v[li] == n-inc) {li++; lv++; inc++;}
            // else good++;
            // if (v[ri] == n-inc or v[ri] == inc) {ri--; rv--; inc++;}
            // else good++;

            if (good == 0) break;
            // inc++;
        }
        if (li < ri) {
            cout << li+1 << ' ' << ri+1 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
}
