#include <iostream>
using namespace std;

int main() {
    int n, num = 3;
    cin >> n;
    int arr[n+1];
    arr[1] = 2;
    arr[2] = 4;
    for (int i = 3; i <= n; i++) {
        arr[i] = arr[i-1] + num;
        if (i % 3 != 0) { num++; }
    }
    cout << arr[n];
}