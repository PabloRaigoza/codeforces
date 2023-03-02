#include <bits/stdc++.h>
using namespace std;

struct n {int v = 0;};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int size,k; cin >> size >> k;
        string s; cin >> s;
        map<char, n> UP;
        map<char, n> LO;
        set<char> g;
        for (int j = 0; j < size; j++) {
            if (islower(s[j]))
                LO[s[j]].v++;
            else UP[s[j]].v++;
            g.insert(tolower(s[j]));
            // cout << s[j] << " ";
        }

        int potentialMap = 0;
        int mappings = 0;
        // for (auto it = g.begin(); it != g.end(); it++) {
        //     char key = it->first;
        //     int val = (it->second).v;
        //     int lowerC = LO[tolower(key)].v;
        //     int diff=abs((lowerC-val)/2)
        //     potentialMap += diff;
        //     abs(lowerC-diff)
        //     mappings += min(LO[tolower(key)].v,val);
        //     // cout << min(LO[tolower(key)].v,val) << " ";
        // }
        // cout << mappings + min(potentialMap,k) << '\n';

        // cout << g.size() << endl;
        set<char>::iterator it;
        for (it = g.begin(); it != g.end(); it++) {
            char v = *it;
            char upKey = toupper(v);
            char loKey = tolower(v);
            int upVal = UP[upKey].v;
            int loVal = LO[loKey].v;
            // cout << v << " ";
            // cout << upVal << " " << loVal << endl;

            int diff = abs((loVal-upVal))/2;
            potentialMap += diff;
            mappings+=min(loVal,upVal);
        }
        cout << mappings + min(potentialMap,k) << '\n';
    }
}
