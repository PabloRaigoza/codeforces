#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        
        vector<long long> pre(n+1, 0);
        for (int i = 1; i <= n; i++) {
            int cur; cin >> cur;
            pre[i] = pre[i-1] + cur;
        }

        int l = 1, r = n;
        while (l < r) {
            int m =  (l + r) / 2;
            cout << "? " <<  m - l + 1 << " ";
            for (int i = l; i <= m; i++) {
                cout << i << " ";
            } cout << endl;
            int x; cin >> x;
            int exp = pre[m] - pre[l-1];
            if (x != exp)  r = m;
            else l = m + 1;
        }
        cout << "! " << (l + r) / 2 << endl;
        cout.flush();
    }    
}
