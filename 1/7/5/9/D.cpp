#include <bits/stdc++.h>
using namespace std;

void rem(unsigned long long n, unsigned long long &twos, unsigned long long &fives, unsigned long long &r) {
    if (n == 2) {twos++; return;}
    if (n == 5) {fives++; return;}

    if (n % 2 == 0) { twos++; n /= 2; }
    else if (n % 5 == 0) { fives++; n /= 5; }
    else {
        r = n;
        return;
    } 

    rem(n, twos, fives, r);
}

unsigned long long calc(unsigned long long t, unsigned long long f, unsigned long long r) {return pow(2, t) * pow(5, f) * r;}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        unsigned long long n, m; cin >> n >> m;

        unsigned long long twos = 0, fives = 0, r = 1;
        unsigned long long largest = n * m;

        rem(n, twos, fives, r);
        unsigned long long cur = n;
        while (true) {
            unsigned long long next = cur;
            if (twos > fives) fives++, next *= 5;
            else if (fives > twos ) twos++, next *= 2;
            else fives++, twos++, next *= 10;

            if (next > largest) {
                unsigned long long start = cur;
                for (int i = 1; true; i++) {
                    if (cur * i <= largest) start = cur * i;
                    else break;
                }
                cur = start;
                break;
            } else {
                cur = next;
            }
            // cout << twos << " " << fives << " ";
        }

        cout << cur << "\n";
    }
}

//  66 - 6 *   11
//       (2*3) * (5 + 2*3)
//       17 -  5 = 12 + 5 = 2*4 + 5
//       100 = 2*50 = 4*2 + 2*5

// 66 = 9*2 + 9*5 + 3
//    = 10
