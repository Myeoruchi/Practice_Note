#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, n;
    string ord;
    cin >> t;
    
    while (t--) {
        cin >> ord >> n;
        cin.ignore();
        deque<int> dq;
        int temp;
        for (int i = 0; i < n; i++) {
            cin.get();
            cin >> temp;
            dq.emplace_back(temp);
        }
        cin.get(), cin.get();
        
        bool back = false;
        for (int i = 0; i < ord.length(); i++) {
            if (ord[i] == 'R') { back = !back; }
            else if (dq.empty()) { ord[0] = 0; break; }
            else if (back) { dq.pop_back(); }
            else { dq.pop_front(); }
        }
        if (!ord[0]) { cout << "error\n"; }
        else if (dq.size()) {
            string ans = "[";
            int size = dq.size();
            for (int i = 0; i < size; i++) {
                int idx = back ? size - i - 1 : i;
                ans += to_string(dq[idx]) + ',';
            }
            ans[ans.length()-1] = ']';
            cout << ans << '\n';
        }
        else { cout << "[]\n"; }
    }
}