#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            if (i < n - (k + 1)) {
                a[i] = n - i;
            } else {
                int cur = 1;
                for (int j = i; j < n; j++) {
                    a[j] = cur; cur++;
                }
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        } cout << "\n";
    }
}