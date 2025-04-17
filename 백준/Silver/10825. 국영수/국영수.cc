#include <iostream>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

struct score {
    string name;
    int a, b, c;
};

bool compare(const score &a, const score &b) {
    if (a.a == b.a) {
        if (a.b == b.b) {
            if (a.c == b.c) {
                return a.name < b.name;
            }
            return a.c > b.c;
        }
        return a.b < b.b;
    }
    return a.a > b.a;
}

int main() {
    FAST_IO;
    int n, a, b, c;
    string s;
    cin >> n;
    score stud[n];
    for (auto &e: stud) {
        cin >> e.name >> e.a >> e.b >> e.c;
    }
    sort(stud, stud+n, compare);
    for (auto &e: stud) {
        cout << e.name << '\n';
    }
}