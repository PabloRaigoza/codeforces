#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) {
            int m; cin >> m;
            a[i] = m;
            b[i] = m;
        }

        sort(b.begin(), b.end());

        bool res = true;
        for (int i = 0; i < n; i++) {
            if (a[i]%2 != b[i]%2) res = false;
        }
        if (res) cout << "YES\n";
        else cout << "NO\n";
    }
}
