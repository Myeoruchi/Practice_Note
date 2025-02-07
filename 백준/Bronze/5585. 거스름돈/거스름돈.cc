#include <iostream>
using namespace std;

int main() {
    int arr[5] = {500, 100, 50, 10, 5};
    int n, cnt = 0;
    cin >> n;
    n = 1000 - n;
    
    for (int i = 0; i < 5; i++) {
        if (n >= arr[i]) {
            cnt += n / arr[i];
            n %= arr[i];
        }
    }
    cnt += n;
    cout << cnt;
}