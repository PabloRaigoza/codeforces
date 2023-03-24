#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string cd = "codeforces";
    int t; cin >> t; while (t--) {
        char c; cin >> c;
        if ( cd.find(c) == string::npos ) cout << "NO\n";
        else cout << "YES\n";
    }
}
