#include <bits/stdc++.h>
using namespace std;

long long sumDiag(const vector<vector<long long>> &p, int n, int m, int a, int b) {
    long long sum = 0;
    int a1 = a, b1 = b;
    while (b1 - 1 >= 0 && a1 - 1 >= 0) { //cout << "a\n";
        a1--;b1--; 
        sum += p[a1][b1];
    }
    a1 = a; b1 = b;
    while (a1 + 1 < n && b1 + 1 < m) {
        // cout << "b\n";
        a1++; b1++; sum += p[a1][b1];
    }
    a1 = a; b1 = b;
    while (a1 - 1 >= 0 && b1 + 1 < m) { //cout << "c\n";
        a1--;b1++; sum +=p[a1][b1];
    }

    a1 = a; b1 = b;
    while (a1 + 1 < n && b1 - 1 >= 0) {//cout << "d\n";
        a1++;b1--; sum +=p[a1][b1];
    }
    return sum + p[a][b];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t; while (t--) {
        int n,m; cin >> n >> m;
        vector<vector<long long>> a(n, vector<long long> (m,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long long cur; cin >> cur; a[i][j] = cur; 
            }
        }
        long long M = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long long ans = sumDiag(a,n,m,i,j);
                if (M < ans) M = ans; 
            }
        }
        cout << M << '\n';

    }
}
