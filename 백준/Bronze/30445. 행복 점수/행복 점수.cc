#include <iostream>
using namespace std;

int main() {
    int happy = 0, sad = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
            case 'A': happy++; sad++; break;
            case 'H':
            case 'P':
            case 'Y': happy++; break;
            case 'D':
            case 'S': sad++; break;
        }
    }
    
    if (happy || sad) {
        int num = 100000 * happy / (happy + sad);
        int integer = num / 1000;
        int decimal = ((num % 1000) + (num % 10 >= 5 ? 10 : 0)) / 10;
        printf("%d.%02d", integer, decimal);
    }
    else { printf("50.00"); }
}