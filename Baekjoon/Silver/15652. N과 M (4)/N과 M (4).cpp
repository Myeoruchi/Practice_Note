#include <iostream>
using namespace std;

int n, m;
int arr[10];

void back(int cnt, int prev) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for (int i = prev; i <= n; i++) {
        arr[cnt] = i;
        back(cnt+1, i);
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    back(0, 1);
}