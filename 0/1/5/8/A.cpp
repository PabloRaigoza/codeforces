#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, k; cin >> n >> k;
    int a = 0;
    int kth;
    for (int i = 1; i <= n; i++) {
        int cur; cin >> cur;
        if (cur == 0) break;
        
        if (i <= k) {
            a++;
            if (i == k) kth = cur;
        } else {
            // cout << a << " ";
            if (cur >= kth) a++;
            else break;
        }
    }
    cout << a << "\n";
}
