#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int arr1[301], arr2[301];

int main() {
    FAST_IO;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) { cin >> arr1[i]; }
    for (int i = 1; i <= n; i++) { cin >> arr2[i]; }
    
    int maxi = 0, cnt = 0;
    bool flg;
    for (int i = 1; i <= n; i++) {
        if ((arr1[i] == arr2[i] && !flg) ||
            (arr1[i] == 1 && arr2[i] == 2) ||
            (arr1[i] == 2 && arr2[i] == 3) ||
            (arr1[i] == 3 && arr2[i] == 1)) {
            if (!flg) { maxi = max(maxi, cnt); cnt = 0; }
            flg = true;
        }
        else {
            if (flg) { maxi = max(maxi, cnt); cnt = 0; }
            flg = false;
        }
        cnt++;
    }
    maxi = max(maxi, cnt);
    cout << maxi;
}