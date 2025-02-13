#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    string s;
    cin >> n >> m >> s;
    
    string post;
    while (m--) {
        cin >> post;
        int idx = 0;
        for (int i = 0; i < post.length(); i++) {
            if (s[idx] == post[i]) { idx++; }
            if (idx == n) { break; }
        }
        if (idx == n) { cout << "true\n"; }
        else { cout << "false\n"; }
    }
}