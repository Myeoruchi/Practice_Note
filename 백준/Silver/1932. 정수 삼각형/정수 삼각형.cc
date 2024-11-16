#include <iostream>
#include <algorithm>
using namespace std;

int arr[500];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int temp, prev;
    cin >> arr[0];
    for (int i = 0; i < n-1; i++) {
        cin >> prev;
        prev += arr[0];
        for (int j = 0; j < i; j++) {
            cin >> temp;
            temp += max(arr[j], arr[j+1]);
            arr[j] = prev;
            prev = temp;
        }
        cin >> arr[i+1];
        arr[i+1] += arr[i];
        arr[i] = prev;
    }
    
    cout << *max_element(arr, arr+n);
    
    return 0;
}