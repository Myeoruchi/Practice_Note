#include <iostream>
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
        
        cout << "Case #" << i << ": ";
        queue<int> q;
        for (int i = 0; i < n*2; i++) {
            if (!q.empty() && q.front() == arr[i]) {
                q.pop();
                continue;
            }
            q.push(arr[i] * 4 / 3);
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
}