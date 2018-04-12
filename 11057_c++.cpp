#include <iostream>

using namespace std;

int main() {
    long long d[1001][10] = {0, };
    int num;
    long long answer = 0;
    cin >> num;
    for(int i = 0; i < 10; i++) {
        d[1][i] = 1;
    }
    for(int i = 2; i <= num; i++) {
        for(int j = 0; j < 10; j++) {
            long long temp = 0;
            for(int k = 0; k < j+1; k++) {
                temp += d[i-1][k];
                temp = temp %10007;
            }
            d[i][j] = temp;
        }
    }
    for(int i = 0; i < 10; i++) {
        answer += d[num][i];
    }
    cout << answer%10007 << '\n';
    return 0;
}