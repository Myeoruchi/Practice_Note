#include <iostream>
#include <vector>
using namespace std;

vector<string> keyboard = {
    "qwertyuiop",
    "asdfghjkl",
    "zxcvbnm"
};

int main() {
    string sl, sr, s;
    cin >> sl >> sr >> s;
    
    int slx, sly, srx, sry;
    for (int i = 0; i < 3; i++) {
        int n = keyboard[i].find(sl);
        if (n != string::npos) {
            slx = n, sly = i;
        }
        n = keyboard[i].find(sr);
        if (n != string::npos) {
            srx = n, sry = i;
        }
    }
    
    bool vowel;
    int x, y, cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < 3; j++) {
            int n = keyboard[j].find(s[i]);
            if (n != string::npos) {
                x = n, y = j;
                break;
            }
        }
        
        vowel = keyboard[y].length() / 2 + keyboard[y].length() % 2 <= x;
        if (vowel) {
            cnt += abs(srx - x) + abs(sry - y) + 1;
            srx = x, sry = y;
        }
        else {
            cnt += abs(slx - x) + abs(sly - y) + 1;
            slx = x, sly = y;
        }
    }
    
    cout << cnt;
}