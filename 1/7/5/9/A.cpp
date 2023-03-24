#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string a = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    int t; cin >> t; while (t--) {
        string cur; cin >> cur;
        if (a.find(cur) == string::npos) cout << "NO\n";
        else cout << "YES\n";
    }
}
