#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> monsters(n);
        int numOne = 0;
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur;
            if (cur == 1) numOne++;
        }
        cout << (numOne+1)/2 + (n-numOne) << '\n';
    }
}
