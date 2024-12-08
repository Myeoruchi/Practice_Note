#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    int q;
    cin >> s >> q;
    
    int len = s.length();
    vector<vector<int>> v(len);
    vector<int> arr(26);
    for (int i = 0; i < len; i++) {
        arr[s[i] - 'a']++;
        v[i] = arr;
    }
    
    char alpha;
    int l, r, times;
    while (q--) {
        cin >> alpha >> l >> r;
        int idx = alpha - 'a';
        times = v[r][idx] - (s[l] == alpha ? v[l][idx] - 1 : v[l][idx]);
        cout << times << '\n';
    }
    
    return 0;
}