#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    const string p = "3141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067";
    int t = 0; cin >> t; while (t--) {
        string a; cin >> a;// cout << a << " ";
        int c = 0;
        for (int i = 0; i < 30; i++) {
            if (a[i] == p[i]) {
                c++; //cout << a[i] << " ";
            } else break;
        }
        cout << c << "\n";
    }
}
