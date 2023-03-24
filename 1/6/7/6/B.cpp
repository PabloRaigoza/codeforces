#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<long long> a(n);

        long long lowest;
        for (int i = 0; i < n; i++) {
            long long cur; cin >> cur;
            a[i] = cur;
            if (i == 0) lowest = cur;
            else if (cur < lowest) lowest = cur;
        }

        long long t = 0;
        for (int i = 0; i < n; i++) {
            t += abs(lowest-a[i]);
        }
        cout << t << '\n';
    }
}
