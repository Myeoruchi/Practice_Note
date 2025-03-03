#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        long long arr[n*2];
        for (int i = 0; i < n*2; i++) {
            cin >> arr[i];
        }
        
        queue<int> q;
        stack<int> st;
        for (int i = n*2-1; i >= 0; i--) {
            if (!q.empty() && q.front() == arr[i]) {
                st.push(q.front());
                q.pop();
                continue;
            }
            q.push(arr[i] * 75 / 100);
        }
        
        cout << "Case #" << i << ": ";
        while (n--) {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << '\n';
    }
}