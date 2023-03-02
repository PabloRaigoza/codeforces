#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        priority_queue<long long> p;
        long long total = 0;
        for (int j = 0; j < n; j++) {
            long long cur; cin >> cur;
            if (cur == 0) {
                if (!p.empty()) {
                    total+=p.top();
                    p.pop();
                }
            } else
                p.push(cur);
        }
        cout << total << '\n';
    }
}