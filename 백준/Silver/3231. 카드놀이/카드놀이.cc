#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[n];
    
    int idx, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> idx;
        arr[idx-1] = i;
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i-1] > arr[i]) {
            cnt++;
        }
    }
    
    cout << cnt;
}