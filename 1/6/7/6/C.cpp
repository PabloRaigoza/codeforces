#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n,m; cin >> n >> m;
        vector<string> w(n);
        for (int i = 0; i < n; i++) {
            string cur; cin >> cur; w[i] = cur;
        }

        int total = 0;
        // for (int i = 0; i < m; i++) {
        //     int small = INT_MAX;
        //     for (int j = 0; j < 26; j++) {
        //         int curSmall = 0;
        //         for (int k = 0; k < n; k++) {
        //             int a = (w[k])[i] - 'a';
        //             curSmall += abs(a-j);
        //         }w
        //         if (curSmall < small) small = curSmall;
        //     }
        //     cout << small << endl;
        //     total += small;
        // }
        int curSmallPair = INT_MAX;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                int small = 0;
                for (int k = 0; k < m; k++) {
                    small += abs( (w[i][k] - 'a') - (w[j][k] - 'a') );
                }
                if (small < curSmallPair) curSmallPair = small;
            }
        }
        cout << curSmallPair << "\n";
    }
}
