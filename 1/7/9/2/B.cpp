#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        long long a1,a2,a3,a4;
        cin >> a1; cin >> a2; cin >> a3; cin >> a4;
        if (a1 != 0) {
            long long lowHap = a1;
            long long total = a1 + 2*min(a2,a3);

            long long diff = abs(a2-a3);
            if (a1 >= diff) {
                total += diff;
                if (a1-diff >= a4) total+=a4;
                else total+= a1-diff + 1;
            } else {
                total += a1 + 1;
            }
            cout << total << '\n';
        } else cout << 1 << '\n';
    }
}
