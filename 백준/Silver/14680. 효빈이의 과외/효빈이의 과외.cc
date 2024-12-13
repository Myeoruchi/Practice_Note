#include <iostream>
using namespace std;

#define MOD 1000000007

int res[50][50];
int temp1[50][50];
int temp2[50][50];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, r, c;
    cin >> n >> r >> c;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> res[i][j];
        }
    }
    
    int tempR, tempC;
    while (--n) {
        cin >> tempR >> tempC;
        if (c != tempR) {
            cout << -1;
            return 0;
        }
        
        for (int i = 0; i < tempR; i++) {
            for (int j = 0; j < tempC; j++) {
                cin >> temp2[i][j];
            }
        }
        
        c = tempC;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int temp = 0;
                for (int k = 0; k < tempR; k++) {
                    temp = (temp + 1LL * res[i][k] * temp2[k][j]) % MOD;
                }
                temp1[i][j] = temp;
            }
        }
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                res[i][j] = temp1[i][j];
            }
        }
    }
    
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum = (sum + res[i][j]) % MOD;
        }
    }
    
    cout << sum;
    return 0;
}