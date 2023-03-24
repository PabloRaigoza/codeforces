#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<vector<int>> a(n, vector<int>(n- 1));
        pair<pair<int,int>, pair<int,int>> common = {{0,0},{0,0}};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                int cur; cin >> cur; a[i][j] = cur;
            }
            if (a[i][0] == common.first.first || common.first.first == 0) common.first.second++, common.first.first = a[i][0];
            else if (a[i][0] == common.second.first || common.second.first == 0) common.second.second++, common.second.first = a[i][0];
        }

        int index = max(common.first.second, common.second.second);

        // cout << common.first.first << " ";
        // cout << common.second.first << " ";

        if (index == common.first.second) index = common.first.first;
        else index = common.second.first;

        for (int i = 0; i < n; i++) {
            if (a[i][0] != index) {
                cout << index << " ";
                for (int j = 0; j < n - 1; j++) {
                    cout << a[i][j] << " ";
                } cout << "\n";
                break;
            }
        }
    }
}
/*
4 2 1 3
2 1 3 5
4 2 3 5
4 1 3 5
4 2 1 5

4 2 1 3
4 2 3 5
4 1 3 5
4 2 1 5

4 2 1 3
4 2 3 5
4 2 1 5

4 2 1 3
4 2 1 5

4 2 1 3
4 2 1 5
*/