#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int d; cin >> d;
        string s;
        cin >> s;
        bool M=false,E=false,O=false,W=false;
        // if (s[0] == 'm' or s[0] == 'M') {
        bool res = true;
        if (s.length() <= 3 or tolower(s[0]) !='m') {cout << "NO\n";} else {
        for (int j =0; j < s.length()-1; j++) {
            char cur = tolower(s[j]);
            char next = tolower(s[j+1]);
            if (cur == 'm') {
                if (next == 'm' or next == 'e') { continue;}
                else {
                cout << "NO\n";res=false;break;
                }
            }
            if (cur == 'e') {
                if (next == 'e' or next == 'o') { continue;}
                else {
                cout << "NO\n";res=false;break;
                }
            }
            if (cur == 'o') {
                if (next == 'o' or next =='w') continue;
                else {
                cout << "NO\n";res=false;break;
                }
            }
            if (cur == 'w' && (next != 'w')) {
                cout << "NO\n";res=false;break;
            }
        }
        if (res) {cout << "YES\n";}}
        // }
    }
}
