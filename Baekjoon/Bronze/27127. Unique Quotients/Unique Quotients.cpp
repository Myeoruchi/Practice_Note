#include <iostream>
using namespace std;

char str[12];
int n, idx;
bool used[10];

void back(int cnt) {
    if (cnt == 10) {
        if (stod(str) / stoi(str+6) == 9 && ++idx == n) {
            str[5] = ' ';
            cout << str;
            exit(0);
        }
        return;
    }
    
    for (int i = 0; i < 10; i++) {
        if (!used[i]) {
            used[i] = true;
            str[cnt+cnt/5] = i + '0';
            back(cnt+1);
            used[i] = false;
        }
    }
}

int main(void) {
    cin >> n;
    back(0);
}