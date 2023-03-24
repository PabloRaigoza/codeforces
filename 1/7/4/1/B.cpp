#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        if (n == 3) {
            cout << "-1\n";
        } else {
            if (n % 2 == 0) {
                for (int i = 0; i < n; i++) {
                    cout << n - i << " ";
                } cout << "\n";
            } else {
                for (int i = (1 + n / 2); i <= n; i++) {
                    cout << i << " ";
                }
                for (int i = 1; i < (1 + n / 2); i++) {
                    cout << i << " ";
                }
                cout << "\n";
            }
        }
    }
}

// 6 5 4 3 2 1
// 4 5 6 7 1 2 3