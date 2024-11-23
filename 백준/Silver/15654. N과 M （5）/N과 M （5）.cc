#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10];
int num[10];
bool used[10];

void back(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            arr[cnt] = num[i];
            used[i] = true;
            back(cnt+1);
            used[i] = false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) { cin >> num[i]; }
    sort(num+1, num+n+1);
    back(0);
}