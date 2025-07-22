#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int idx[26] = {
    -1, -1, 1, -1, -1,
    5, 4, -1, -1, -1,
    -1, -1, -1, -1, 6,
    0, -1, -1, 3, -1,
    -1, 2, -1, -1, -1,
    -1
};

int main() {
    IO;
    int N; cin >> N;
    int cost[7];
    vector<string> v(N);
    for (string& s: v) { cin >> s; }
    for (int& e: cost) { cin >> e; }
    
    ll sum = 0;
    for (string s: v) {
        bool recycle = true;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != s[i-1]) {
                recycle = false;
                break;
            }
        }
        if (recycle) { sum += s.length() * min(cost[idx[s[0]-'A']], cost[6]); }
        else { sum += s.length() * cost[6]; }
    }
    cout << sum;
}