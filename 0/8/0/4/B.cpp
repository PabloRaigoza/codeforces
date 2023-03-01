#include <bits/stdc++.h>
using namespace std;

long long modular_pow(long long base, long long exponent, long long modulus) {
    if (modulus == 1) return 0;
    long long res = 1;
    base = base % modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            res = (res*base) % modulus;
        exponent = exponent >> 1;
        base = (base*base) % modulus;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long m = 1000000007;
    char cur;
    long long consectAs = 0;
    long long consectBs = 0;
    long long sum = 0;
    bool doneA = false;
    while (cin >> cur) {
        if (!doneA && cur == 'a') {
            consectAs++;
        } else if (cur == 'b') {
            consectBs++;
            doneA = true;
        } else if (doneA && cur == 'a') {
            sum += ((modular_pow(2, consectAs, m)-1) * consectBs) % m;
            consectAs++;
            consectBs = 0;
            doneA = false;
        }
    }
    if (consectAs != 0 && consectBs != 0) {
        sum += ((modular_pow(2, consectAs, m)-1) * consectBs) % m;
    }
    cout << sum % m << endl;
}
