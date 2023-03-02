#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        long long a,b; cin >> a >> b;
        long long n,m; cin >> n >> m;

        long long left = n / (m+1);
        long long right = n - left * (m + 1);
        cout << left*min(b*(m+1),a*m)+ right*min(a,b) << '\n';
    }
}
