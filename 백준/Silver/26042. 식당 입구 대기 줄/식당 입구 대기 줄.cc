#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int wait = 0, maximum = 0, last = (1 << 31) - 1;
    int tmp;
    while (n--) {
        cin >> tmp;
        if (tmp == 1) {
            cin >> tmp;
            if (++wait > maximum) {
                maximum = wait;
                last = tmp;
            }
            else if (wait == maximum && last > tmp) { last = tmp; }
        }
        else { wait--; }
    }
    
    cout << maximum << ' ' << last;
}