#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<long long, long long>> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) { long long cur; cin >> cur; a[i] = {cur, i}; }
        for (int i = 0; i < n; i++) { long long cur; cin >> cur; b[i] = {cur, i}; }
        for (int i = 0; i < n; i++) { long long cur; cin >> cur; c[i] = {cur, i}; }

        sort(a.begin(), a.end(), greater<pair<long long, long long>>());
        sort(b.begin(), b.end(), greater<pair<long long, long long>>());
        sort(c.begin(), c.end(), greater<pair<long long, long long>>());

        // for (int i = 0; i < n; i++) cout << a[i].first << " "; cout << "\n";
        // for (int i = 0; i < n; i++) cout << b[i] << " "; cout << "\n";
        // for (int i = 0; i < n; i++) cout << c[i] << " "; cout << "\n";


        long long best = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    long long cur = a[i].first + b[j].first + c[k].first;

                    if (a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second) {
                        best = max(best, cur);
                    }
                }
            }
        }

        cout << best << "\n";
    }
}