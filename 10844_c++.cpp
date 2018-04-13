#include <iostream>

using namespace std;

int main() {

    long long d[101][11] = {0,};
    long long answer = 0;
    int num;
    cin >> num;
    for(int i = 0; i<10; i++) {

        d[1][i] = 1;
    }
    for(int i = 2; i <= num; i++) {
        d[i][0] = d[i-1][0];
        for(int j = 0; j < 10; j++) {

            d[i][j] = (d[i-1][j-1] + d[i-1][j+1])%1000000000;
        }
    }
    for(int i = 1; i < 10; i++) {
        answer += d[num][i];
    }

    answer = answer%1000000000;
    cout << answer <<'\n';
    return 0;
}