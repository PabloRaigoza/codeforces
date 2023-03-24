#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        string a,b; cin >> a >> b;
        int a_s = a.length(); int b_s = b.length();
        int a_c = 0, b_c = 0;
        for (int i = 0; i < a_s; i++) {
            if (a[i] == 'X') a_c++;
            else break;
        }

        for (int i = 0; i < b_s; i++) {
            if (b[i] == 'X') b_c++;
            else break;
        }

        if (a == b) {
            cout << "=\n";
        } else if (a[a_s-1] == 'L' && b[b_s-1] == 'L') {
            if (a_c > b_c) cout << ">\n";
            else cout << "<\n";
        } else if (a[a_s-1] == 'S' && b[b_s-1] == 'S') {
            if (a_c > b_c) cout << "<\n";
            else cout << ">\n";
        } else if (a[a_s-1] == 'L' && b[b_s-1] == 'S') {
            cout << ">\n";
        } else if (a[a_s-1] == 'S' && b[b_s-1] == 'L') {
            cout << "<\n";
        } else if (a[a_s-1] == 'S' && b[b_s-1] == 'M') {
            cout << "<\n";
        } else if (a[a_s-1] == 'M' && b[b_s-1] == 'S') {
            cout << ">\n";
        } else if (a[a_s-1] == 'M' && b[b_s-1] == 'L') {
            cout << "<\n";
        } else if (a[a_s-1] == 'L' && b[b_s-1] == 'M') {
            cout << ">\n";
        }
    }
}