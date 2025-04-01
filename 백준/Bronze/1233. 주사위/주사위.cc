#include <iostream>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int arr[81];

int main() {
    FAST_IO;
    int a, b, c;
    cin >> a >> b >> c;
    
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                arr[i + j + k]++;
            }
        }
    }
    
    int idx = 3;
    for (int i = 4; i <= a+b+c; i++) {
        idx = arr[idx] < arr[i] ? i : idx;
    }
    cout << idx;
}