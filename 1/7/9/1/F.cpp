#include <bits/stdc++.h>
using namespace std;

long long sumString(long long a) {
    string inp = to_string(a);
    long long sum = 0;
    for (int i = 0; i < inp.length(); i++) {
        sum += inp[i] - '0';
    }
    return sum;
}

template<class T> struct segment_tree {
    vector<T> SEG; int N; T DEF = (T) NULL; // Variables & Helpers
    T (*COMB)(T, T) = [](T a, T b) { return (a+ b); };

    segment_tree(int n) { N = n; SEG.assign(2 * N, DEF); } // Constructors
    segment_tree(int n, T d) : segment_tree(n) { DEF = d; }
    segment_tree(int n, T d, T (*c)(T, T)) : segment_tree(n, d) { COMB = c; }

    void pull(int p) { SEG[p] = COMB(SEG[2 * p], SEG[2 * p + 1]); } // Mutators
    void update(int p, T v) { if (p < 0 || p >= N) return;
        SEG[p += N] = v; for (p /= 2; p; p /= 2) pull(p); }

    T get(int p) { return (p < 0 || p >= N ? DEF : SEG[p + N]); } // Accessors
    void print() { for (T elem : SEG) cout << elem << " "; cout << "\n"; }
    T query(int l, int r) { T ra = DEF, rb = DEF; // [l, r]
        if (l < 0 || r < 0 || l >= N || r >= N || l > r) return DEF;
        for (l += N, r += N + 1; l < r; l /= 2, r /= 2) {
            if (l & 1) ra = COMB(ra, SEG[l++]);
            if (r & 1) rb = COMB(SEG[--r], rb);
        } return COMB(ra, rb); }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while(t--) {
        int n, q; cin >> n >> q;
        vector<long long> a(n,0);
        segment_tree<int> b(n, 0);
        for (int i = 0; i < n; i++) {long long cur; cin >> cur; a[i] = cur;}
        for (int i = 0; i < q; i++) {
            int cmd; cin >> cmd;
            if (cmd == 1) {
                int l,r; cin >> l >> r; l--; r--;
                b.update(l  ,b.get(l)+1);
                b.update(r+1,b.get(r+1)-1);
            } else {
                int index; cin >> index; index--;
                int jok = min<int>(3,b.query(0,index));
                long long h = a[index];
                for (int j = 0; j < jok; j++) h = sumString(h);
                cout << h << "\n";
            }
        }
    }
}