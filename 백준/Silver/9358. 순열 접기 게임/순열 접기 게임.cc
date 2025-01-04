#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        while (n != 2) {
            int max = n/2 + n%2;
            for (int i = 0; i < max; i++) {
                arr[i] = arr[i] + arr[n-i-1];
            }
            n = max;
        }
        
        cout << "Case #" << i << (arr[0] > arr[1] ? ": Alice\n" : ": Bob\n");
    }
    return 0;
}