#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<long long, long long>> a(n), b(n);
        for (int i = 0; i < n; i++) {long long cur; cin >> cur; a[i] = {cur, i};}
        for (int i = 0; i < n; i++) {long long cur; cin >> cur; b[i] = {cur, i};}

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool alice = true;
        long long b_total = 0;
        long long a_total = 0;
        while (a.size() && b.size()) {
            if (alice) {
                int b_index = b.back().second;
                bool found = false;
                for (int i = a.size() - 1; i > -1; i--) {
                    if (a[i].second == b_index) {
                        found = true;
                        b_index = i;
                        break;
                    }
                }

                if (found) {
                    a[b_index].first--;

                    if (a[b_index].first == 0) a.erase(a.begin() + b_index);
                    else sort(a.begin(), a.end());
                } else {
                    b_total += b.back().first;
                    alice = !alice;
                }
                b.pop_back();
            } else {
                int a_index = a.back().second;
                bool found = false;
                for (int i = b.size() - 1; i > -1; i--) {
                    if (b[i].second == a_index) {
                        found = true;
                        a_index = i;
                        break;
                    }
                }

                if (found) {
                    b[a_index].first--;

                    if (b[a_index].first == 0) b.erase(b.begin() + a_index);
                    else sort(b.begin(), b.end());
                } else {
                    a_total += a.back().first;
                    alice = !alice;
                }
                a.pop_back();
            }
            alice = !alice;
        }

        long long res = a_total - b_total;
        for (int i = 0; i < a.size(); i++) res += a[i].first;
        for (int i = 0; i < b.size(); i++) res -= b[i].first;
        
        cout << res << "\n";
    }
}