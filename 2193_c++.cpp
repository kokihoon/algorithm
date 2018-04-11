#include <iostream>

using namespace std;

int main() {
    long long d[91][2] = {0, };
    int num;

    cin >> num;
    d[1][1] = 1;
    d[2][0] = 1;
    for(int i = 3; i <= num; i++) {
        d[i][1] = d[i-1][0];
        d[i][0] = d[i-1][0] + d[i-1][1]; 
    }
    printf("%lld\n", d[num][0] + d[num][1]);
    return 0;
}