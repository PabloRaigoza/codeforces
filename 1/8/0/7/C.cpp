#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string a; cin >> a;
        // cout << a << endl;
        vector<int> b(26,0);
        bool res = true;
        for (int i = 0; i < n; i++) {
            int index = a[i] - 'a';
            
            if (i % 2 == 0) {
                // cout << b[index] << " ";
                if (b[index] == 0) b[index] = 1;
                else if (b[index] == -1) {res = false; break;}
            } else {
                if (b[index] == 0) b[index] = -1;
                else if (b[index] == 1) {res = false; break;}
            }
        }
        if (res) cout << "YES\n";
        else cout << "NO\n";
    }
}