#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int neg = 0, pos = 0;
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur;
            if (cur < 0) neg++;
            else pos++;
        }

        for (int i = 0; i < pos; i++)
            cout << i + 1<< " ";
        for (int i = 0; i < neg; i++)
            cout << pos - i - 1 << " ";
        cout << "\n";

        for (int i = 0; i < 2*min(pos, neg); i++) {
            if (i % 2 == 0) cout << 1 << " ";
            else cout << 0 << " ";
        }
        for (int i = 0; i < pos-neg; i++) {
            cout << i + 1 << " ";
        } cout << "\n";
        
    }
}
