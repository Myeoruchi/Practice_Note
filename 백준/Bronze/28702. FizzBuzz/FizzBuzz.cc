#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string str;
	int next;
	for (int i = 3; i > 0; i--) {
	    cin >> str;
	    if (str[0] != 'F' && str[0] != 'B') {
	        next = stoi(str) + i;
	        if (next % 3 && next % 5) { cout << next; return 0; }
	        if (next % 3 == 0) { cout << "Fizz"; }
	        if (next % 5 == 0) { cout << "Buzz"; }
	        return 0;
	    }
	}
}