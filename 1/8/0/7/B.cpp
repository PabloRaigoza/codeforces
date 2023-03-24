#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int evn = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur;
            if (cur % 2 == 0) evn+=cur;
            else odd+=cur;
        }
        if (evn > odd) cout << "YES\n";
        else cout << "NO\n";
    }
}
