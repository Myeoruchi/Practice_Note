#include <iostream>
using namespace std;

int arr[128];

int main(void) {
    int n, ans = 200;
    string str, temp = "uospc";
    cin >> n >> str;
    for (int i = 0; i < n; i++) {
        arr[str[i]]++;
    }
    for (int i = 0; i < 5; i++) {
        ans = min(ans, arr[temp[i]]);
    }
    cout << ans;
}