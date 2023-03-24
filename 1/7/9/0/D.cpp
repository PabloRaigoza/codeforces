#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n; cin >> n; 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            long long cur; cin >> cur; a[i] = cur;
        }
        sort(a.begin(), a.end());

        long long cnt = 0;
        long long val = 0;
        long long prev_cnt = -1;
        long long count = 0;
        long long chain = 1;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                cnt++; val = a[i];
            }
            else if (a[i] == val) cnt++;
            else {
                if (prev_cnt != -1 && prev_cnt != cnt) {
                    count += abs(prev_cnt - cnt) + cnt;
                    chain = 1;
                } else {
                    chain++;
                }
                prev_cnt = cnt;
                cnt = 0;
                val = a[i];
            }
        }

        if (prev_cnt != cnt) {
            count += abs(prev_cnt - cnt);
            chain = 1;
        }
        count += cnt;
        
        prev_cnt = cnt;
        cnt = 0;
        
        cout << count << "\n";

    }
}

// 1 1 4 4 2 3 2 3 5
// 1 1 1 2 2 3 3 4 4 5
