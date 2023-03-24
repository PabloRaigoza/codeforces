#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n, q; cin >> n >> q;// cout << n << " " << q << " ";
        vector<long long> pre(n+1,0);
        for (int i = 1; i <= n; i++) {
            long long cur; cin >> cur;
            pre[i] = pre[i-1] + cur;
        }

        for (int i = 0; i < q; i++) {// cout << i << " ";
            long long l, r, k; cin >> l >> r >> k;
            long long middle = k*(r-l+1);
            long long left = pre[l-1]; 
            long long right = pre[n] - pre[r]; 
            
            if ((middle + left + right) % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
