#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0), b(n);

        for (int i = 0; i < n; i++) { 
            int cur; cin >> cur;
            a[i] = cur + a[max(0, i - 1)];
            // cout << a[i] << " ";
        }
        // cout << '\n';
        for (int i = 0; i < n; i++) { cin >> b[i]; }
        
        int mx_v = -1;

        int bestB = 0;
        for (int i = 0; i < min(n, k); i++) {
            if (b[bestB] < b[i]) bestB = i;
            int cur = a[i] + b[bestB] * (k - i - 1);
            // cout << cur << " ";
            if (mx_v < cur) mx_v = cur;
        }

        cout << mx_v << "\n";
    }
}