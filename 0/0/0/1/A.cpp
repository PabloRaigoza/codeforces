#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long n,m,a; cin >> n >> m >> a;
    cout << (long long) (ceil((double)n/(double)a) * ceil((double)m/(double)a)) << endl;
}
