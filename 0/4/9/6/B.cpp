#include <bits/stdc++.h>
using namespace std;

bool isGe(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i]-'0' > b[i]-'0') {
            return true;
        } else if (a[i]-'0' < b[i]-'0') {
            return false;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int size; cin >> size;
    string d; cin >> d;

    string longest = d;
    for (int i = 0; i < 10; i++) {
        string curD = d;
        for (int j = 0; j < size; j++) {
            // C - '0'
            curD[j] = char(((curD[j] - '0' + i) % 10) + '0');
        }
        
        string small = curD;
        for (int j = 0; j < size; j++) {
            string flip = curD.substr(size-j)+curD.substr(0,size-j);
            if (isGe(small, flip)) {
                small = flip;
            }
        }
        if (isGe(longest, small)) {
            longest = small;
        }
    }
    cout << longest << '\n';
    // cout << isGe("201","202") << '\n';
}
