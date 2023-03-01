#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur; a[i] = cur; sum += cur;
    }
    vector<int> sorted;
    for (int i = 0; i < n; i++) {
        // cout << a[i] << endl;
        if (a[i]*(n-1) == sum - a[i]) {
            sorted.push_back(i+1);
            // cout << "here?\n";
        }
    }
    // sort(sorted.begin(), sorted.end());
    cout << sorted.size() << '\n';
    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << ' ';
    } cout << '\n';
}
