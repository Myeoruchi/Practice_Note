#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    int q;
    cin >> s >> q;
    
    vector<vector<int>> v(26);
    int len = s.length();
    for (int i = 0; i < len; i++) {
        v[s[i]-'a'].emplace_back(i);
    }
    
    char alpha;
    int l, r, times;
    while (q--) {
        cin >> alpha >> l >> r;
        times = 0;
        
        int idx = alpha - 'a';
        int size = v[idx].size();
        for (int i = 0; i < size; i++) {
            if (l <= v[idx][i] || i+1 == size) {
                if (l > v[idx][i]) { times--; }
                times -= i;
                break;
            }
        }
        
        for (int i = 0; i < size; i++) {
            if (r <= v[idx][i] || i+1 == size) {
                if (r >= v[idx][i]) { times++; }
                times += i;
                break;
            }
        }
        
        cout << times << '\n';
    }
    return 0;
}