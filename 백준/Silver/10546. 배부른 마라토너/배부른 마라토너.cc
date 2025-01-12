#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    unordered_map<string, int> um;
    int n;
    cin >> n;
    
    string name;
    for (int i = 0; i < n; i++) {
        cin >> name;
        um[name]++;
    }
    for (int i = 0; i < n-1; i++) {
        cin >> name;
        if (--um[name] == 0) {
            um.erase(name);
        }
    }
    
    for (auto elem: um) {
        cout << elem.first;
    }
}