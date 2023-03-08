#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int count = 0;
        for (int i = 0; i < n/2; i++) {
            if (s[i]!=s[n-i-1]) count+=2;//cout << s[i] << ',' << s[n-i] << '\n';}
            else break;
        }
        cout << n-count << '\n';
    }
}
