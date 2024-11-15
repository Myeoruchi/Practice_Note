#include <iostream>
using namespace std;

int num[11];
int oper[4];
int n, maxR = 1 << 31, minR = 0xFFFFFFFF >> 1;

void get_res(int cnt, int res) {
    if (cnt == n) {
        maxR = res > maxR ? res : maxR;
        minR = res < minR ? res : minR;
        return;
    }
    
    for (int i = 0; i < 4; i++) {
        if (oper[i]) {
            int next = res;
            switch (i) {
                case 0: next += num[cnt]; break;
                case 1: next -= num[cnt]; break;
                case 2: next *= num[cnt]; break;
                case 3: next /= num[cnt]; break;
            }
            oper[i]--;
            get_res(cnt+1, next);
            oper[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> oper[i];
    }
    get_res(1, num[0]);
    cout << maxR << '\n' << minR;
}