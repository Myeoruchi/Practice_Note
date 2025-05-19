#include <iostream>
#include <set>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int t, k; cin >> t;
    while (t--) {
        multiset<int> ms;
        cin >> k;
        
        char inst;
        int t;
        while (k--) {
            cin >> inst >> t;
            if (inst == 'I') { ms.insert(t); }
            else if (!ms.empty()) {
                if (t == 1) { ms.erase(--ms.end()); }
                else { ms.erase(ms.begin()); }
            }
        }
        if (ms.empty()) { cout << "EMPTY\n"; }
        else { cout << *(--ms.end()) << ' ' << *ms.begin() << '\n'; }
    }
}