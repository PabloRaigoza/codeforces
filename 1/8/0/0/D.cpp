#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int size; cin >> size;
        string s; cin >> s;
        bool consec = false;
        long long pairing = 0;
        bool repeat = false;
        for (int j = 0; j < size-1; j++) {
            char cur = s[j];
            char next = s[j+1];
            if (cur == next) {
                if (!consec)
                    pairing++;
                consec = true;
                repeat = false;
            } else if (cur != next) {
                consec = false;
                if (j < size-2 && cur == s[j+2])
                    repeat = true;
                else {
                    repeat = false;
                    pairing++;
                }
            }
        }
        cout << pairing << '\n';
    }
}
