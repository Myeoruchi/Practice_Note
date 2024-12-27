#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[100] = {0};
    int n, num, cnt = 0;
    cin >> n;
    while (cin >> num) {
        if (arr[num-1]) { cnt++; }
        else { arr[num-1]++; }
    }
    cout << cnt;
}