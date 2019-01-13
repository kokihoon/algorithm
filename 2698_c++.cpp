#include <iostream>

using namespace std;

int main() {
    int num[101][101][2];
    int count;
    num[1][0][0] = 1;
    num[1][0][1] = 1;

    for(int i = 2; i < 101; i++) {
        for(int j = 0; j < i; j++) {
            num[i][j][0] = num[i-1][j][0] + num[i-1][j][1];
            num[i][j][1] = num[i-1][j][0] + ((j > 0) ? num[i-1][j-1][1] : 0);

        }
    }
    cin >> count;
    int n, k;
    while(count--) {
        cin >> n;
        cin >> k;
        cout << num[n][k][0] + num[n][k][1]<< endl;
    }

    return 0;
}