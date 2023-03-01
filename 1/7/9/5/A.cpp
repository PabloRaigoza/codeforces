#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int d; cin >> d >> d;
        string first, second; cin >> first >> second;
        string rev = string(second.rbegin(), second.rend());
        string total = first + rev;

        bool repeat = false;
        bool twice = false;
        for (int j = 0; j < total.length()-1; j++) {
            if (total[j] == total[j+1]) {
                if (repeat) {
                    twice = true;
                    break;
                } else repeat = true;
            }
        }

        if (twice) cout << "NO\n";
        else cout << "YES\n";
    }
}
