#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int arr[1000001];

int main() {
    IO;
    int n;
    arr[1]--;
    for (int i = 2; i <= 1420; i++) {
        int sum = i * (i + 3) / 2;
        int head = 2, next = i + 2;
        while (sum <= 1000000) {
            arr[sum]++;
            sum += next - head;
            next++, head++;
        }
    }
    while (cin >> n && n) {
        cout << arr[n] + 1 << '\n';
    }
}