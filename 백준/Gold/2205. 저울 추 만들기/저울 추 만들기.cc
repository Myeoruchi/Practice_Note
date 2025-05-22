#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

bool used[10001];
int ans[10001];

int main() {
    IO;
    int n; cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i <<= 1) { cnt++; }
    for (int i = n; i >= 1; i--) {
        for (int j = cnt; j >= 0; j--) {
            if (!used[(1 << j) - i] && (1 << j) - i <= n) {
                used[(1 << j) - i] = 1;
                ans[i] = (1 << j) - i; 
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++) { cout << ans[i] << '\n'; }
}