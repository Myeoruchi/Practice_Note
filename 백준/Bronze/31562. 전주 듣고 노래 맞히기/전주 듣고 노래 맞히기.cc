#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v(800);
    int n, m;
    cin >> n >> m;
    
    string song, note;
    while (n--) {
        cin >> song >> song;
        getline(cin, note);
        
        string key = {note[1]-'A'+'0', note[3]-'A'+'0', note[5]-'A'+'0'};
        int idx = stoi(key);
        if (v[idx].empty()) { v[idx] = song; }
        else { v[idx] = string("?"); }
    }
    
    string ans;
    while (m--) {
        getline(cin, note);
        
        string key = {note[0]-'A'+'0', note[2]-'A'+'0', note[4]-'A'+'0'};
        int idx = stoi(key);
        if (v[idx].empty()) { ans += "!\n"; }
        else { ans += v[idx] + '\n'; }
    }
    
    cout << ans;
    return 0;
}