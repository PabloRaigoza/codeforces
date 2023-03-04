#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        string a,b; cin >> a >> b;
        if (a[0] == b[0]) {cout << "YES\n"<<a[0]<<"*\n"; continue;}
        if (a[a.length()-1] == b[b.length()-1]) {cout << "YES\n*" << a[a.length()-1] << '\n'; continue;}
        bool res = false;
        for (int i = 0; i < a.length()-1; i++) {
            size_t pos = b.find(a.substr(i,2));
            // cout << a.substr(i,2) << endl;
            if (pos != string::npos) {
                res = true;
                cout << "YES\n*"<<a[i]<<a[i+1]<<"*\n";
                break;
            }
        } if (!res) cout << "NO\n";
    }
}
