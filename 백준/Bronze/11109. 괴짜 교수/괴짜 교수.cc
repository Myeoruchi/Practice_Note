#include <iostream>
using namespace std;

int main() {
    int t, d, n, s, p;
    scanf(" %d", &t);
    
    while (t--) {
        scanf(" %d %d %d %d", &d, &n, &s, &p);
        int t1 = n * s;
        int t2 = d + n * p;
        
        if (t1 > t2) { printf("parallelize\n"); }
        else if (t1 == t2) { printf("does not matter\n"); }
        else { printf("do not parallelize\n"); }
    }
}