#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string a; cin >> a;
        
        vector<int> right(26, 0);
        vector<int> left(26, 0);

        for (int i = 0; i < n; i++) right[a[i]-'a']++;

        int mx = 0;
        for (int i = 0; i < n; i++) {
            int in = a[i] - 'a';
            left[in]++; right[in]--;
            int cur = 0;
            for (int j = 0; j < 26; j++) {
                cur += max(0, min (1, left[j]));
                cur += max(0, min (1, right[j]));
            }
            mx = max(mx, cur);
        }
        cout << mx << "\n";
    }
}