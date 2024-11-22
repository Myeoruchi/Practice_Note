#include <iostream>
#include <unordered_set>
#include <vector>
#include <sstream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    
    while (cin >> n && n) {
        unordered_set<int> page;
        string str;
        cin >> str;
        
        vector<string> strArr;
        stringstream ss1(str);
        unsigned long long a, b;
        char temp;
        while (getline(ss1, str, ',')) {
            if (str.find('-') != string::npos) {
                stringstream ss2(str);
                ss2 >> a >> temp >> b;
                for (; a <= b && a <= n; a++) { page.insert(a); }
            }
            else if (str.length() <= 4 && stoi(str) <= n) { page.insert(stoi(str)); }
        }
        
        cout << page.size() << '\n';
    }
}