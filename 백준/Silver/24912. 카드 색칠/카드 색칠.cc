#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) { 
            if (i) { arr[i] = arr[i-1] == 3 ? 1 : arr[i-1] + 1; }
            else { arr[i] = 1; }
            if (i+1 < n && arr[i] == arr[i+1]) { arr[i] = arr[i] == 3 ? 1 : arr[i+1] + 1; }
        }
        else if ((i && arr[i-1] == arr[i]) || (i+1 < n && arr[i] == arr[i+1])) {
            cout << -1;
            return 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}