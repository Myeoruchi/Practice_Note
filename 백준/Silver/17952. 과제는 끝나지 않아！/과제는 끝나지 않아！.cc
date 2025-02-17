#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    stack<pair<int, int>> st;
    int n;
    cin >> n;
    
    int flag, score = 0, time = 0, res = 0;
    while (n--) {
        cin >> flag;
        if (flag) {
            st.push({score, time});
            cin >> score >> time;
        }
        if (time != 0 && --time == 0) {
            res += score;
            if (!st.empty()) {
                score = st.top().first;
                time = st.top().second;
                st.pop();
            }
        }
    }
    
    cout << res;
}