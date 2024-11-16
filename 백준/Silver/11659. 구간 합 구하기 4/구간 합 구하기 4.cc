#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a-1] << '\n';
    }
}