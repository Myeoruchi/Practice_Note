#include <iostream>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int arr[11];

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        int sum = 0, pos = 0;
        bool flg = false;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] > arr[pos]) { pos = i; flg = false; }
            else if (arr[i] == arr[pos]) { flg = true; }
        }
        if (flg) { cout << "no winner\n"; }
        else if (arr[pos] * 2 > sum) { cout << "majority winner " << pos << '\n'; }
        else { cout << "minority winner " << pos << '\n'; }
    }
}