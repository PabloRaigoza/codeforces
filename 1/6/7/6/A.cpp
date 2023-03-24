#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        string a; cin >> a;
        
        int first = 0, last = 0;
        
        first += int(a[0]);
        first += int(a[1]);
        first += int(a[2]);
        last += int(a[3]);
        last += int(a[4]);
        last += int(a[5]);
        if (first == last) cout << "YES\n";
        else cout << "NO\n";
    }
}
