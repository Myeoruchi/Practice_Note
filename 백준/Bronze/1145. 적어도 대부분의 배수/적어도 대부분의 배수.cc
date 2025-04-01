#include <iostream>
#include <algorithm>
using namespace std;

int lcm(int a, int b) {
    return a * b / __gcd(a, b);
}

int main() {
    int arr[5], ans = (1 << 31) - 1;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            for (int k = j+1; k < 5; k++) {
                ans = min(ans, lcm(arr[i], lcm(arr[j], arr[k])));
            }
        }
    }
    cout << ans;
}