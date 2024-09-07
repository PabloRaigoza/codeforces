#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a;
        cin >> n >> a;
        vector<int> charFreq(26, 0);
        for (int i = 0; i < n; i++) {
            charFreq[a[i] - 'A']++;
        }

        int cnt = 0;
        // cout << charFreq[0] << "\n";
        for (int i = 0; i  < 26; i++) {
            if (charFreq[i] >= i + 1) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}
