#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, size;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> size;
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (arr[i] + size - 1) / size * size;
    }
    cout << sum;
}