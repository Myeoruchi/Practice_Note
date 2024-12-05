#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long sum = 0;
    cin >> n;
    
    int arr[n], temp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] >> temp;
        sum += temp;
    }

    sort(arr, arr+n);
    for (int i = 0; i < n; i++) {
        sum += (long long)arr[i] * (i+1);
    }
    
    cout << sum;
    return 0;
}