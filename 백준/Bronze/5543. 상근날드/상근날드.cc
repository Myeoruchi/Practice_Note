#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[5];
    int minimum = 2000;
    
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        minimum = min(arr[i], minimum);
    }
    cin >> arr[3] >> arr[4];
    
    cout << min(arr[3], arr[4]) + minimum - 50;
}