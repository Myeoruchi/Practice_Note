#include <iostream>
#include <vector>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    vector<int> v;
    int n, joker = 1;
    bool left_side = true;
    cin >> n;
    while (n--) {
        int tmp, sum = 27;
        while (sum) {
            cin >> tmp;
            v.emplace_back(tmp);
            sum -= tmp;
        }
        
        int left = 0, right = 0;
        left_side = joker < 14 ? true : false;
        joker = joker < 14 ? joker : joker - 13;
        for (int i = 0; i < v.size(); i++) {
            if (i % 2 == 0) { right += v[i]; }
            else { left += v[i]; }
            if (left_side && joker <= left) { joker += right; break; }
            else if (!left_side && joker <= right) { joker += left; break; }
        }
        v.clear();
    }
    cout << joker;
}