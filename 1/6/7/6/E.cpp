#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n,Q; cin >> n >> Q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur; a[i] = cur; 
        } sort(a.rbegin(),a.rend());

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) b[i] = a[i];
            else b[i] = b[i-1] + a[i];
        }
        for (int i = 0; i < Q; i++) {
            int q; cin >> q;
            auto x = lower_bound(b.begin(),b.end(),q);
            if (x == b.end()) cout << -1 << '\n';
            else cout << x-b.begin()+1 << '\n';
        }
    }
}
