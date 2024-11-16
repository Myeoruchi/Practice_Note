#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    stack<int> st;
    int n, next = 0, cnt = 0;
    cin >> n >> next;
    string ans;
    
    while (true) {
        if (!st.empty() && st.top() == next) {
            ans += "-\n";
            st.pop();
            if (!(cin >> next)) {
                cout << ans;
                break;
            }
        }
        else if (cnt < n) {
            ans += "+\n";
            cnt++;
            st.push(cnt);
        }
        else {
            cout << "NO";
            break;
        }
    }
    return 0;
}