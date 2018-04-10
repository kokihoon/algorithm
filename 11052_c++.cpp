#include <iostream>

using namespace std;

int Max(int a1, int a2) {

    return a1 > a2 ? a1:a2;
}
int main() {
    int d[1000] = {0, };
    int dp[1000] = {0,};
    int num;
    cin >> num;

    for(int i = 1; i <= num; i++){
        cin >> d[i];
    }
    for(int i = 1; i <= num; i++) {
        for(int j = 0; j < i;j++){
            dp[i] = Max(dp[j] + d[i-j], dp[i]);
        }
    }
    cout << dp[num] << '\n';
    return 0;
}