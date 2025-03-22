#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false), cin.tie(0)

int main() {
    FAST_IO;
    int n, m;
    cin >> n >> m;
    vector<int> student[n];
    vector<int> subject[m];
    vector<int> subject_limit(m);
    for (int i = 0; i < m; i++) {
        cin >> subject_limit[i];
    }
    
    for (int i = 0; i < n; i++) {
        int temp;
        while (cin >> temp && temp != -1) {
            subject[temp-1].emplace_back(i);
        }
    }
    for (int i = 0; i < m; i++) {
        if (subject[i].size() <= subject_limit[i]) {
            for (auto elem: subject[i]) {
                student[elem].emplace_back(i+1);
            }
            subject_limit[i] -= subject[i].size();
            subject[i].clear();
        }
    }
    
    for (int i = 0; i < n; i++) {
        int temp;
        while (cin >> temp && temp != -1) {
            subject[temp-1].emplace_back(i);
        }
    }
    for (int i = 0; i < m; i++) {
        if (subject[i].size() <= subject_limit[i]) {
            for (auto elem: subject[i]) {
                student[elem].emplace_back(i+1);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (student[i].empty()) {
            cout << "망했어요\n";
            continue;
        }
        sort(student[i].begin(), student[i].end());
        for (auto elem: student[i]) {
            cout << elem << ' ';
        }
        cout << '\n';
    }
}