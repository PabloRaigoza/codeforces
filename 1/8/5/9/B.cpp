#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long lowest_second = 1000000001;
        long long lowest_first = 1000000001;
        long long res = 0;
        for (int i = 0; i < n; i++) {
            int m; cin >> m;
            long long f_low = 1000000001;
            long long s_low = 1000000001;
            for (int j = 0; j < m; j++) {
                long long cur; cin >> cur;
                if (cur < f_low) {
                    s_low = f_low;
                    f_low = cur;
                }
                else if (cur < s_low) s_low = cur;
            }
            res += s_low;
            lowest_first = min(lowest_first, f_low);
            lowest_second = min(lowest_second, s_low);
        }

        cout << res - lowest_second + lowest_first << '\n';
    }
}
