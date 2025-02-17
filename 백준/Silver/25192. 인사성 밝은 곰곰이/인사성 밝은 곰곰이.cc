#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL);
	cin.sync_with_stdio(false);
	unordered_set<string> s;
	int n, cnt = 0;
	string str;
	cin >> n;
	while (n--) {
	    cin >> str;
	    if (str == "ENTER") { cnt += s.size(); s.erase(s.begin(), s.end()); }
	    else { s.insert(str); }
	}
	cout << cnt + s.size();
}