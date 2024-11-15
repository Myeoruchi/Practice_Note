#include <iostream>
using namespace std;

int n, ans;
bool arr[15][15];
bool colUsed[15];

bool inRange(int a) {
    return (0 <= a && a < n);
}

void back(int cnt) {
    if (cnt == n) { ans++; return; }
    
    for (int col = 0; col < n; col++) {
        if (!colUsed[col]) {
            for (int j = 0; j <= cnt; j++) {
                if ((inRange(col-j) && arr[cnt-j][col-j]) || (inRange(col+j) && arr[cnt-j][col+j])) { break; }
                else if (j == cnt) {
                    arr[cnt][col] = true;
                    colUsed[col] = true;
                    back(cnt+1);
                    arr[cnt][col] = false;
                    colUsed[col] = false;
                }
            }
        }
    }
}

int main(void) {
    cin >> n;
    back(0);
    cout << ans;
}