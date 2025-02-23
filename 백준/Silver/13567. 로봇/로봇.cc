#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m, n;
    cin >> m >> n;
    
    int posX = 0, posY = 0, dir = 0, num;
    string ord;
    while (n--) {
        cin >> ord >> num;
        if (ord == "MOVE") {
            posX += dx[dir] * num;
            posY += dy[dir] * num;
            if (posX < 0 || posX > m || posY < 0 || posY > m) {
                cout << -1;
                return 0;
            }
        }
        else if (num == 0) { dir = (dir + 3) % 4; }
        else { dir = (dir + 1) % 4; }
    }
    cout << posX << ' ' << posY;
}