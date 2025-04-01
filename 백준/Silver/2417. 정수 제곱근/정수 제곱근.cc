#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    unsigned long long n, left = 0, right = 1LL << 32 , mid;
    cin >> n;
    while (left < right) {
        mid = (left + right) >> 1;
        if (mid * mid >= n) { right = mid; }
        else { left = mid + 1; }
    }
    cout << left;
}

/* unsigned이기 때문에 left <= right, right = mid - 1로 했을 때
0일 때 무한루프에 빠짐 */