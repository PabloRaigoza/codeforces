#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; int dig; string num;
        cin >> n >> dig >> num;

        string res = "";
        for (int j = 0; j < n; j++) {
            // cout << num[j] - '0' << " ";
            if (num[j] - '0' <= dig) {
                char a = (dig + '0');
                res = num.substr(0, j) + a + num.substr(j);
                break;
            }
        }
        if (res == "") {
            res = num + ((char) (dig + '0'));
        }
        cout << res << '\n';
    }

    // string a = "apple";
    // cout << a.substr(0, 2) + "6" + a.substr(2) << "\n";
}
